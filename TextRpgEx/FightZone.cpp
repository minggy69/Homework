#include "FightZone.h"
#include "Monster.h"
#include "Player.h"
#include <conio.h>
#include <iostream>


void FightZone::Fight(Player& _Player, Monster& _Monster)
{
	//if (nullptr == _Monster)
	//{
	//    return;
	//}
	while (true)
	{

		if (_Monster.IsDeath())
		{
			printf_s(_Monster.GetName());
			printf_s("�� �׾����ϴ�.\n");
			_getch();
			break;
		}

		system("cls");

		_Player.StatusUI();
		_Monster.StatusUI();
		_Monster.Damage(_Player.GetAtt());
		_Player.Damage(_Monster.GetAtt());

		// Ű���忡�� Ű�� �ѹ��̶� ������ �������� ���缭
		_getch();
	}
}

FightZone::FightZone() 
	: NewMonster()
{

}

FightZone::FightZone(const FightZone& _Other)
	: NewMonster(_Other.NewMonster)
{

}