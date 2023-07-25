#include <iostream>
#include "myClass.h"
#include"NPoint2D.h"
class Sword
{
	// ģ�� Ŭ����
	// �ҵ�(������ �����ϴ� ��)�� �÷��̾ ģ���� ������.
	friend class Player;
	
	// ģ�� �Լ�
	friend void Upgrade(Sword& sword)
	{
			int oldDamage = sword.mDamage;
	}
private:
	int mDamage;

public:
	Sword(int dmg) : mDamage(dmg) {}
};

class Player
{
public:
	void AttackWith(Sword& sword)
	{
		std::cout << "����!" << sword.mDamage << std::endl;
	}
};


class MyInt
{
public:
	int mValue;
	MyInt() :mValue()
	{
		std::cout << "+[�⺻������]" << std::endl;
	}
	MyInt(int value) : mValue{ value }
	{
		std::cout << "+[������] :" << value << std::endl;
	}
	~MyInt()
	{
		std::cout << "-[�Ҹ���]" << mValue << std::endl;
	}
};

MyInt operator+ (MyInt op1, MyInt op2)
{
	return MyInt(op1.mValue + op2.mValue);
}

int main()
{
	/*Sword Katana{ 10 };
	Player p1;
	p1.AttackWith(Katana);*/

	/*Sword s1(1);

	Upgrade(s1);*/

	NPoint2D pt1{ 2, 3 };

	pt1.Print();

	NPoint2D pt2{ 3, 4 };
	NPoint2D pt3 = pt1 + pt2;
	pt3.Print();

	NPoint2D pt4 = pt1 + pt2 + pt3;
	pt4.Print();

	NPoint2D pt5 = pt2 - pt1;
	pt5.Print();
	//MyInt x{ 1 }, y{ 2 };

	//////////////////////
	NPoint2D pt6{ 1, 2 }, pt7{};

	pt7 = ++pt6;

	pt6.Print();
	pt7.Print();



	///////////////////
	NPoint2D pt8{ 1,2 }, pt9{};

	pt9 = --pt8;

	pt8.Print();
	pt9.Print();

}
