// UsingDLLRuntimeExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;
//Define function pointer
typedef int (*MYPROC) (int, int);
typedef float (*DIV) (int, int);

int main()
{
	int number1, number2;
	cout << "Enter number 1 : "; cin >> number1;
	cout << "Enter number 2 : "; cin >> number2;
	MYPROC Add, Sub, Mul;
	DIV Div;

	HINSTANCE instanceDLL = LoadLibrary(TEXT("DLL.dll"));
	if (instanceDLL != NULL)
	{
		//Load Add function from DLL
		Add = (MYPROC) GetProcAddress(instanceDLL, "Add");
		if (Add != NULL)
		{
			cout << "Tong = " << Add(number1, number2) << endl;
		}
		else
		{
			cout << " Can't load Add function!" << endl;
		}

		//Load Sub function from DLL
		Sub = (MYPROC)GetProcAddress(instanceDLL, "Sub");
		if (Sub != NULL)
		{
			cout << "Hieu = " << Sub(number1, number2) << endl;
		}
		else
		{
			cout << " Can't load Sub function!" << endl;
		}
		//Load Mul function from DLL
		Mul = (MYPROC) GetProcAddress(instanceDLL, "Mul");
		if (Mul != NULL)
		{
			cout << "Tich = " << Mul(number1, number2) << endl;
		}
		else
		{
			cout << " Can't load Mul function!" << endl;
		}
		//Load Div function from DLL
		Div = (DIV)GetProcAddress(instanceDLL, "Div");
		if (Div != NULL)
		{
			try
			{
				cout << "Thuong = " << Div(number1, number2) << endl;
			}
			catch (const std::logic_error& error)
			{
				cout << error.what() << endl;
			}
		}
		else
		{
			cout << " Can't load Div function!" << endl;
		}

		FreeLibrary(instanceDLL);
	}
	else
	{
		cout << "Can't load dll" << endl;
	}
	system("PAUSE");
    return 0;
}

