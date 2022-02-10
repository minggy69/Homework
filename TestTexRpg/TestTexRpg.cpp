// TestTexRpg.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

int StrintCount(const char* _Text)
{
    int Count = 0;

    while (true)
    {
        if (0 == _Text[Count])
        {
            break;
        }

        Count += 1;
    }

    return Count;
}

int LineCount = 50;

void LinePrint(int _FirstPrint) 
{
    for (size_t i = 0; i < LineCount - _FirstPrint; i++)
    {
        printf_s("=");
    }
    printf_s("\n");
}

class Player 
{
private:
    int Att;
    int Hp;
    int Def;

public:

    bool IsDeath()
    {
        return Hp <= 0;
    }

    // Get함수
    int GetAtt() 
    {
        return Att;
    }

    void Damage(int _Damage) 
    {
        printf_s("플레이어가 ");
        char Arr[10] = {0,};
        _itoa_s(_Damage, Arr, 10);
        printf_s(Arr);
        printf_s("의 데미지를 입었습니다\n");
        Hp -= _Damage;
    }

    void StatusUI() 
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

public:
    Player() 
        : Att(10), Hp(10000), Def(1)
    {

    }
    
};

class Monster 
{
private:
    const char* Name;
    int Att;
    int Hp;
    int Def;

public:
    const char* GetName()
    {
        return Name;
    }


    bool IsDeath() 
    {
        return Hp <= 0;
    }

    // Get함수
    int GetAtt()
    {
        return Att;
    }

    void Damage(int _Damage)
    {
        printf_s(Name);
        printf_s("가 ");
        char Arr[10] = { 0, };
        _itoa_s(_Damage, Arr, 10);
        printf_s(Arr);
        printf_s("의 데미지를 입었습니다\n");
        Hp -= _Damage;
    }

    void StatusUI()
    {
        printf_s(Name);
        printf_s(" Status ");
        LinePrint(StrintCount(Name) + StrintCount(" Status "));
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

public:
    Monster(const char* _Name)
        : Name(_Name), Att(10), Hp(100), Def(1)
    {
        int a = 0;
    }

    Monster() 
        : Name("None"), Att(10), Hp(100), Def(1)
    {
        int a = 0;
    }
};

class FightZone 
{
public:
    void Fight(Player& _Player, Monster& _Monster)
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
        

        int a = 0;
    }

public:
    FightZone() {

    }

};

int main()
{
    Player MainPlayer = Player();
    Monster MainMonster[10] = {"오크", "드래곤", "코볼트", };
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
