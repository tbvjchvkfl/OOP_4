#include <iostream>
#include "NPoint2D.h"


NPoint2D::NPoint2D() :mX{}, mY{}
{

}

NPoint2D::NPoint2D(int x, int y) : mX{x}, mY{y}
{

}

void NPoint2D::Print()
{
	std::cout << "(" << mX << ", " << mY << ")" << std::endl;
}

NPoint2D operator+(NPoint2D arg1, NPoint2D arg2)
{
	NPoint2D result;
	result.mX = arg1.mX + arg2.mX;
	result.mY = arg1.mY + arg2.mY;

	return result;
}

NPoint2D operator++(NPoint2D arg1)
{
	arg1.mX++;
	arg1.mY++;
	return arg1;
}

const NPoint2D& operator++(NPoint2D& arg1, int V)
{
	// 대입 후
	NPoint2D temp(arg1.mX, arg1.mY);

	// 증가
	arg1.mX++;
	arg1.mY++;
	return temp;
}

std::ostream& operator<<(std::ostream& os, NPoint2D pt)
{
	os << "(" << pt.mX << ", " << pt.mY << ")";
	return os;
}