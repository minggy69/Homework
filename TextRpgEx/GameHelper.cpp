#include "GameHelper.h"
#include <iostream>

int LineCount = 50;

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


void LinePrint(int _FirstPrint)
{
    for (size_t i = 0; i < LineCount - _FirstPrint; i++)
    {
        printf_s("=");
    }
    printf_s("\n");
}