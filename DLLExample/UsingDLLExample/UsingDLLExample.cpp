// UsingDLLExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MyMath.h"

using namespace std;

int main()
{
	int number1, number2;
	cout << "Enter number 1 : "; cin >> number1;
	cout << "Enter number 2 : "; cin >> number2;
	
	int sum = Add(number1, number2);
	cout << "Tong  = " << sum << endl;
	
	int sub = Sub(number1, number2);
	cout << "Hieu = " << sub << endl;
	
	int mul = Mul(number1, number2);
	cout << "Tich = " << mul << endl;
	
	try
	{
		float div = Div(number1, number2);
		cout << "Thuong = " << div << endl;
	}
	catch (std::logic_error& error)
	{
		cout << error.what() << endl;
	}
	
	system("PAUSE");
    return 0;
}

