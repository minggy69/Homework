#pragma once

class Monster
{
private:
    const char* Name;
    int Att;
    int Hp;
    int Def;

public:
    const char* GetName();
    bool IsDeath();
    // GetÇÔ¼ö
    int GetAtt();
    void Damage(int _Damage);
    void StatusUI();
   
public:
    Monster(const char* _Name);
    Monster();
};