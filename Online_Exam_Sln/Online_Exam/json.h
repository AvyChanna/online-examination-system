#pragma once
namespace Online_Exam{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace Newtonsoft::Json;
	public ref class JQuestions{
	public:
		JQuestions(){ Statement = ""; AnswerType = 0; Answer = gcnew List<int>(); Options = gcnew List<String^>(); }
		String ^Statement;
		int AnswerType;
		List<int> ^Answer;
		List<String^> ^Options;
	};
	public ref class JSection{
	public:
		JSection(){ Section = 0; Weight = 0; TotalQuestions = 0; NumberOfQuestionsGiven = 0; Questions = gcnew List<JQuestions^>(); }
		int Section;
		int Weight;
		int TotalQuestions;
		int NumberOfQuestionsGiven;
		List<JQuestions^> ^Questions;
	};
	public ref class JExam{
	public:
		JExam(){ Data = gcnew List<JSection^>(); }
		List<JSection^> ^Data;
	};
}