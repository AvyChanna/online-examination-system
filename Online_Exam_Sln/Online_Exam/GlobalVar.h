#pragma once

#include<stdio.h>

#ifndef __globalvar__
#define __globalvar__

using namespace System;

namespace Global_Var{
	
	public ref class gVar
	{
	public:
		static int a;
		static String^ b;
		gVar();
		~gVar();

	private:

	};

	gVar::gVar()
	{
	}

	gVar::~gVar()
	{
	}
}



#endif