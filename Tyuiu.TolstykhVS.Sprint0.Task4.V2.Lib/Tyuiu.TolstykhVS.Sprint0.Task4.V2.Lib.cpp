// Tyuiu.TolstykhVS.Sprint0.Task4.V2.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include"..//..//Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service1 :public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d)override
	{
		
			return a * (b + c) + d;
	};
};