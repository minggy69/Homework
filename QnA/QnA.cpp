
#include <iostream>

int main()
{
    char LeftArr[6];

    LeftArr[0] = '1';
    LeftArr[1] = '2';
    LeftArr[2] = '3';
    LeftArr[3] = '4';
    LeftArr[4] = '5';
    LeftArr[5] = 0;

    char RightArr[6];

    RightArr[0] = 0;
    RightArr[1] = 0;
    RightArr[2] = 0;
    RightArr[3] = 0;
    RightArr[4] = 0;
    RightArr[5] = 0;

    for (int i = 0; i < 3; i += 1)
    {
        RightArr[i] = LeftArr[i+1];
    }


}