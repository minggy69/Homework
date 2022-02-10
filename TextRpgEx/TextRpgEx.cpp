// TextRpgEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Monster.h"
#include "FightZone.h"


int main()
{
    Player MainPlayer = Player();
    Monster MainMonster[10] = { "오크", "드래곤", "코볼트", };
    FightZone NewFightZone = FightZone();

    //int classSize = sizeof(Monster);
    //int ArrSize = sizeof(MainMonster);

    // Monster 16
    // 160

    int MonsterIndex = 0;

    while (true)
    {
        NewFightZone.Fight(MainPlayer, MainMonster[MonsterIndex]);

        if (true == MainPlayer.IsDeath())
        {
            printf_s("플레이어가 패배했습니다.");
        }

        MonsterIndex += 1;

        if ((sizeof(MainMonster) / sizeof(Monster)) <= MonsterIndex)
        {
            // 디테일
            // 재능
            // 난 다 이해했고 언제든지 만들수 있는데.
            // 몬스터 1마리를 만들어냈죠.
            // 노가다 처럼 그걸 못하는 사람
            // 기술충.
            // 매쉬만 바뀌고 스킨만 바뀌는 애들을 왜 만들어야지?
            printf_s("플레이어가 승리했습니다.\n");
            char Arr[10] = { 0, };
            _itoa_s(MonsterIndex, Arr, 10);
            printf_s(Arr);
            printf_s("마리 몬스터를 죽였습니다.\n");
            break;
        }
    }

}


