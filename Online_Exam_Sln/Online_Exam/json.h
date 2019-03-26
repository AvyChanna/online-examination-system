#pragma once
namespace Online_Exam{
	using namespace System;
	using namespace
	using namespace Newtonsoft::Json;
	public ref class JString{
	public:
		JString(){ Sessions = 0; Data = gcnew }
		~JString(){}
		int Sessions;
		List<JData^> ^Data;
	};
	public ref class JData{
	public:
		JData(){}
		~JData(){}
		int Section;
		int Weight;
		int TotalQuestions;
		int NumberOfQuestionsGiven;
		array<JQues^> ^Questions;
	};
	public ref class JQues{
	public:
		JQues(){}
		~JQues(){}
		String ^Statement;
		int AnswerType;
		array<int> ^Answer;
		array<String^> ^Options;
	};
}
Jstring deserializedProduct = JsonConvert.DeserializeObject<Jstring>("[data:[awvfwegvewbv ]]");