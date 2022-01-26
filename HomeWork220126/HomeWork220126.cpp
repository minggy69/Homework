// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

//증감연산자
//++x	먼저 피연산자의 값을 1 증가시킨 후에 해당 연산을 진행함.
//x++	먼저 해당 연산을 수행하고 나서, 피연산자의 값을 1 증가시킴.
//--x	먼저 피연산자의 값을 1 감소시킨 후에 해당 연산을 진행함.
//x--	먼저 해당 연산을 수행하고 나서, 피연산자의 값을 1 감소시킴.

#include <iostream>

class MyInt
{
public:
    MyInt()
        : Value()
    {
    }
public:
    MyInt()
        : _Result()
    {
    }
public:
    int Value;

public:
    MyInt& operator+= (const MyInt& _Value);
    (
       _Result = Value += 1;
       return *this;
    }
};

//모르겠습니다.

int main()
{
    int Value = 0;
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;


    MyInt MyValue = 0;
    MyInt MyResult = 0;
  
    return Result;

    // ++ 쓰지마세요
    //MyResult = ++MyValue;
    //MyResult = 0;
    //MyResult = MyValue++;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
