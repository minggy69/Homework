#include "Player.h"
#include <iostream>
#include "GameHelper.h"

bool Player::IsDeath()
{
    return Hp <= 0;
}

// Get�Լ�
int Player::GetAtt()
{
    return Att;
}

void Player::Damage(int _Damage)
{
    printf_s("�÷��̾ ");
    char Arr[10] = { 0, };
    _itoa_s(_Damage, Arr, 10);
    printf_s(Arr);
    printf_s("�� �������� �Ծ����ϴ�\n");
    Hp -= _Damage;
}

void Player::StatusUI()
{
    printf_s("�÷��̾� Status ");

    LinePrint(StrintCount("�÷��̾� Status "));


    {
        printf_s("���ݷ� : ");
        char Arr[10] = { 0, };
        _itoa_s(Att, Arr, 10);
        printf_s(Arr);
        printf_s("\n");
    }

    {
        printf_s("ü  �� : ");
        char Arr[10] = { 0, };
        _itoa_s(Hp, Arr, 10);
        printf_s(Arr);
        printf_s("\n");
    }

    {
        printf_s("���� : ");
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