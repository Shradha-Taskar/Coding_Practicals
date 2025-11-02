/*
    Algorithm

    START
        Accept three numbers from user as A, B, C
        If A >= B and A >= C
            Return A
        Else if B >= A and B >= C
            Return B
        Else
            Return C
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description   : Returns the largest number among three
//  Input         : Integer, Integer, Integer
//  Output        : Integer
//  Author        : Shradha Dattatray Taskar
//  Date          : 02/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if(x >= y && x >= z)
    {
        return x;
    }
    else if(y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a = 0, b = 0, c = 0, result = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);

    printf("Largest number is: %d\n", result);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 10 20 30   Output : 30
//  Input : 5 15 10    Output : 15
//  Input : -5 -2 -9   Output : -2
//
///////////////////////////////////////////////////////////////////////////////////////////////
