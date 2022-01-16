// HomeWork220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{

}

int main()
{
	char Text[100] = { "0123456789" };
	Cut("0123456789", 2, 7, Text);
	// "234567"

	char LeftArr[11];

	LeftArr[0] = '0';
	LeftArr[1] = '1';
	LeftArr[2] = '2';
	LeftArr[3] = '3';
	LeftArr[4] = '4';
	LeftArr[5] = '5';
	LeftArr[6] = '6';
	LeftArr[7] = '7';
	LeftArr[8] = '8';
	LeftArr[9] = '9';
	LeftArr[10] = 0;

	char RightArr[11];

	RightArr[0] = 0;
	RightArr[1] = 0;
	RightArr[2] = 0;
	RightArr[3] = 0;
	RightArr[4] = 0;
	RightArr[5] = 0;
	RightArr[6] = 0;
	RightArr[7] = 0;
	RightArr[8] = 0;
	RightArr[9] = 0;
	RightArr[10] = 0;

	for (int i = 0; i < 6; i +=1 )
	{
		RightArr[i] = LeftArr[i + 2];
	}

	printf_s(RightArr);

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
