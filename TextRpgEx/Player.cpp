#include "Player.h"
#include <iostream>
#include "GameHelper.h"

bool Player::IsDeath()
{
    return Hp <= 0;
}

// Get함수
int Player::GetAtt()
{
    return Att;
}

void Player::Damage(int _Damage)
{
    printf_s("플레이어가 ");
    char Arr[10] = { 0, };
    _itoa_s(_Damage, Arr, 10);
    printf_s(Arr);
    printf_s("의 데미지를 입었습니다\n");
    Hp -= _Damage;
}

void Player::StatusUI()
{
    printf_s("플레이어 Status ");

    LinePrint(StrintCount("플레이어 Status "));


    {
        printf_s("공격력 : ");
        char Arr[10] = { 0, };
        _itoa_s(Att, Arr, 10);
        printf_s(Arr);
        printf_s("\n");
    }

    {
        printf_s("체  력 : ");
        char Arr[10] = { 0, };
        _itoa_s(Hp, Arr, 10);
        printf_s(Arr);
        printf_s("\n");
    }

    {
        printf_s("방어력 : ");
        char Arr[10] = { 0, };
        _itoa_s(Def, Arr, 10);
        printf_s(Arr);
        printf_s("\n");
    }

    LinePrint(0);
}

Player::Player()
    : Att(10)
    , Hp(10000)
    , Def(10)
{

}