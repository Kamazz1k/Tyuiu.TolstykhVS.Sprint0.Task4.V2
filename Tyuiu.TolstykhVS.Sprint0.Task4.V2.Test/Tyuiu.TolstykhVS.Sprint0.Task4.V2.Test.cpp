#include "pch.h"
#include "CppUnitTest.h"
#include "..//..//Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <iostream>
#include <cassert>

using namespace std;

namespace UnutClass4
{
	TEST_CLASS(UnutClass4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 3;
			int b = 4;
			int c = 1;
			int d = 2;
			int k;

			k = a * (b + c) + d;

			assert(k == 17);
			
			return 0;



		};
	};
}
