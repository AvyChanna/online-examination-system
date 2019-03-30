#pragma once
using namespace System;
public ref class QuestionStruc
{
public:
	QuestionStruc();
	~QuestionStruc();
	//int SectionNum;
	int QuestionNum;
	String ^ attemptAns;
	String ^ correctAns;
private:

};

QuestionStruc::QuestionStruc()
{
	attemptAns = "";
	correctAns = "";
	QuestionNum = 0;
}

QuestionStruc::~QuestionStruc()
{
}