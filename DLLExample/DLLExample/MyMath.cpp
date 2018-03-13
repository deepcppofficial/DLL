#include <iostream>
#include "MyMath.h"

DLL int Add(int a, int b)
{
	return a + b;
}

DLL int Sub(int a, int b)
{
	return a - b;
}

DLL int Mul(int a, int b)
{
	return a * b;
}

DLL float Div(int a, int b)
{
	if (b == 0)
	{
		throw std::logic_error("Div by zero");
	}
	return static_cast<float>(a) / b;
}
