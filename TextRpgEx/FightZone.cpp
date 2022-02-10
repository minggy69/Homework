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
			printf_s("가 죽었습니다.\n");
			_getch();
			break;
		}

		system("cls");

		_Player.StatusUI();
		_Monster.StatusUI();
		_Monster.Damage(_Player.GetAtt());
		_Player.Damage(_Monster.GetAtt());

		// 키보드에서 키가 한번이라도 눌리기 전까지는 멈춰서
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