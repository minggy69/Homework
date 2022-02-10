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
    // Get�Լ�
    int GetAtt();
    void Damage(int _Damage);
    void StatusUI();
   
public:
    Monster(const char* _Name);
    Monster();
};