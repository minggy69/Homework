#pragma once
//#include "Player.h"
//#include "Monster.h"

// 전방 선언 클래스가 존재할거다.
class Player;
class Monster;
class FightZone
{
public:
    void Fight(Player& _Player, Monster& _Monster);

    // 이건 답이 없다. Player의 내용을 알아야 하므로
    // 헤더가 여기에 추가 되어야 한다.
    //void Test(Player& _Player)
    //{
    //    _Player.IsDeath();
    //}

public:
    // 이거 왜 안되는지 내일 설명해야겠네용.
    // 전방선언하면 헤더추가 안해도됨 개꿀 헤헤 XXXXXX
    // 전방선언은 기본적으로 어떤 자료형의 참조형을 사용 할때만 적용이 된다.
    // 이유?
    // 참조형일 경우 컴파일러가 어차피 8(4)바이트로 판단해서 크기를 잡기 때문에
    // Monster의 세부적인 사항을 알필요가 없는것이다.
    Monster* NewMonster;

public:
    FightZone();
    FightZone(const FightZone& _Other);

        // : NewMonster(Monster())
    //{

    //}
};

