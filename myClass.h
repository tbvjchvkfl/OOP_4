#pragma once
#include <iostream>
class MyClass
{
public:
	int mValue_1;
	int mValue_2;

	MyClass() : MyClass(1, 1) {}
	MyClass(int v1, int v2) : mValue_1(v1), mValue_2(v2) {}

	void Change(int x, int y)
	{
		mValue_1 = x;
		mValue_2 = y;
	}

	void Print()
	{
		std::cout << mValue_1 << ", " << mValue_2 << std::endl;
	}
};

