#include "Monster.h"
#include "GameHelper.h"
#include <iostream>

const char* Monster::GetName()
{
	return this->Name;
}


bool Monster::IsDeath()
{
	return this->Hp <= 0;
}

// Get함수
int Monster::GetAtt()
{
	return this->Att;
}

void Monster::Damage(int _Damage)
{
	printf_s(this->Name);
	printf_s("가 ");
	char Arr[10] = { 0, };
	_itoa_s(_Damage, Arr, 10);
	printf_s(Arr);
	printf_s("의 데미지를 입었습니다\n");
	this->Hp -= _Damage;
}

void Monster::StatusUI()
{
	printf_s(this->Name);
	printf_s(" Status ");
	LinePrint(StrintCount(this->Name) + StrintCount(" Status "));
	{
		printf_s("공격력 : ");
		char Arr[10] = { 0, };
		_itoa_s(this->Att, Arr, 10);
		printf_s(Arr);
		printf_s("\n");
	}

	{
		printf_s("체  력 : ");
		char Arr[10] = { 0, };
		_itoa_s(this->Hp, Arr, 10);
		printf_s(Arr);
		printf_s("\n");
	}

	{
		printf_s("방어력 : ");
		char Arr[10] = { 0, };
		_itoa_s(this->Def, Arr, 10);
		printf_s(Arr);
		printf_s("\n");
	}

	LinePrint(0);
}

Monster::Monster(const char* _Name)
	: Name(_Name), Att(10), Hp(100), Def(1)
{
}

Monster::Monster()
	: Name("None"), Att(10), Hp(100), Def(1)
{
}