#pragma once
namespace Questions{
	using namespace System;
	using namespace System::Data;
	public ref class Ques{
	public:
		String ^ q;
		DataTable ^dt;
		Ques(){
			q = "";
			dt = gcnew DataTable();
		}
	};
}