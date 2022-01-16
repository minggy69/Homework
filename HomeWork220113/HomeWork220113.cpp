// HomeWork220113.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(const char* _Left)
{
    int Count = 0;
    while (0 != _Left[Count])
    {
        Count += 1;
    }

    return Count;
}

void StringTrimRemove(const char* _Left, char* _Right)
{
    // *_Right = *_Left

    // 논리형

    int LeftIndex = 0;
    int RightIndex = 0;
    for (
        LeftIndex = 0;
        0 != _Left[LeftIndex];
        LeftIndex += 1
        )
    {
        char ValueLeft = _Left[LeftIndex];
        char ValueRight = _Right[LeftIndex];

        if (' ' != ValueLeft)
        {
            _Right[RightIndex] = _Left[LeftIndex];
            RightIndex += 1;
        }
    }

    // int LeftStringCount = StringCount(_Left);

    _Right[RightIndex] = 0;

    return;
}

int main()
{
    // 내가 프로그래밍을 배웠다.
    // 그럼 해결가능성이 높아져.
    // 사실????

    // 나는 정말 천지신명께 맹세코 이학원에서 처음으로 코딩을 배웠어.
    // 분명 뭔가를 배운거 같은데 조합이 안된다.
    // 그게 일반적인게 맞아요.
    // 재능있어요. 일머리가 뛰어나다.

    // 아니다.
    // 나는 못해결

    {
        char Text0[5] = "a b";
        // [a][ ][b][0][0]

        char Text1[5] = { 0, };
        // [a][0][0][0][0]

        char* PtrTest = Text1;

        PtrTest[2];

        int a = 0;
        // a          a

        //Text1[1] = Text0[1];
        //Text1[2] = Text0[2];
        //Text1[3] = Text0[3];
        //Text1[4] = Text0[4];
    }

    {
        char Text[10000] = { 0, };

        // "a b"

        // 좀더 처음부터 생각하세요

        // 공백을 없애라?
        // 복사를 하는데 ' '는 복사를 하지말아라.
        StringTrimRemove("a d fasdhjkfashdj fhasdjkfhsadjk eeee", Text);

        // "aaabbbcccddd"
        printf_s(Text);
    }
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
