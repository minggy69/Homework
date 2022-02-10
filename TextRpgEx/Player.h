#pragma once

class Player
{
private:
    int Att;
    int Hp;
    int Def;

public:
    bool IsDeath();
    
    int GetAtt();

    void Damage(int _Damage);

    void StatusUI();

public:
    Player();
};


