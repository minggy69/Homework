#pragma once
//#include "Player.h"
//#include "Monster.h"

// ���� ���� Ŭ������ �����ҰŴ�.
class Player;
class Monster;
class FightZone
{
public:
    void Fight(Player& _Player, Monster& _Monster);

    // �̰� ���� ����. Player�� ������ �˾ƾ� �ϹǷ�
    // ����� ���⿡ �߰� �Ǿ�� �Ѵ�.
    //void Test(Player& _Player)
    //{
    //    _Player.IsDeath();
    //}

public:
    // �̰� �� �ȵǴ��� ���� �����ؾ߰ڳ׿�.
    // ���漱���ϸ� ����߰� ���ص��� ���� ���� XXXXXX
    // ���漱���� �⺻������ � �ڷ����� �������� ��� �Ҷ��� ������ �ȴ�.
    // ����?
    // �������� ��� �����Ϸ��� ������ 8(4)����Ʈ�� �Ǵ��ؼ� ũ�⸦ ��� ������
    // Monster�� �������� ������ ���ʿ䰡 ���°��̴�.
    Monster* NewMonster;

public:
    FightZone();
    FightZone(const FightZone& _Other);

        // : NewMonster(Monster())
    //{

    //}
};

