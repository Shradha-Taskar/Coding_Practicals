/*
    Algorithm
    START
        Accept number from user as No
        If No < 0 then convert it into positive
        From 1 to No/2
            If No % i == 0 and i % 2 == 0
                Display i
        STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description   : It is used to display even factors
//  Input         : Integer
//  Output        : None
//  Author        : Shradha Dattatray Taskar
//  Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//  Test Case : Input : 36   Output : 2 6 12 18
///////////////////////////////////////////////////////////////////////////////////////////////
