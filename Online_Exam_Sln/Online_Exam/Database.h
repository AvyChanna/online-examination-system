#pragma once
#ifndef __database__
#define __database__
#include "stdafx.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Collections::Generic;
namespace Database{
	public ref class OES{
	public:
		OES();
		~OES();
		//DB DATA
		OleDbDataAdapter ^DBDA;
		DataTable ^DBDT;

		//Manage Query Paramters  --> Handling errors /SQL attacks
		List<OleDbParameter^> ^ Params;

		//Query Statistics
		int RecordCount;
		String ^Exception;

		void ExecQuery(String^ Query);
		void AddParam(String^ Name, Object^ Value);
		String^ CmdQuery;

	private:
		//Create a connection
		OleDbConnection ^ DBCon;

		//Prepare DB Command
		OleDbCommand ^DBCmd;

		OleDbParameter ^NewParam;
	};

	OES::OES()
	{
		DBCon = gcnew OleDbConnection();
		DBCon->ConnectionString = "Provider=Microsoft.JET.OLEDB.4.0; Data Source=DatabaseLab.mdb";
		Params = gcnew List<OleDbParameter^>;
		CmdQuery = "";
	}
	OES::~OES(){}
	void OES::ExecQuery(String^ Query){
		//Reset query statistics
		RecordCount = 0;
		Exception = "";

		try{
			//Open a connection
			DBCon->Open();

			//Create a database command
			DBCmd = gcnew OleDbCommand(Query, DBCon);

			//Load  params into DB Command
			for each(OleDbParameter ^p in Params){
				DBCmd->Parameters->Add(p);
			}
			//Clear params list
			Params->Clear();
			this->CmdQuery = DBCmd->CommandText;

			DBDT = gcnew DataTable();
			DBDA = gcnew OleDbDataAdapter(DBCmd);
			RecordCount = DBDA->Fill(DBDT);
		}
		catch (OleDbException ^ex){
			Exception = ex->Message;
			Console::WriteLine(CmdQuery);
		}

		//Close database connection
		if (DBCon->State == ConnectionState::Open)
		{
			DBCon->Close();
		}
	}

	void OES::AddParam(String^ Name, Object^ Value){
		NewParam = gcnew OleDbParameter(Name, Value);
		Params->Add(NewParam);
	}
}
#endif