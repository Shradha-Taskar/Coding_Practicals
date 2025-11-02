/*
step 1: understand the problem statement
step 2: write the algorithm
step 3: decide the programming language
step 4: write the program
step 5: test the program
*/

/*
    Algorithm
    START
        Accept number from user as No
        If No < 0 then convert it into positive
        From 1 to No/2
            If No % i == 0
                Display i
        STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description   : It is used to display factors of number
//  Input         : Integer
//  Output        : None (Display on screen)
//  Author        : Shradha Dattatray Taskar
//  Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
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

    DisplayFactor(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//  Test Cases
//  Input : 24   Output : 1 2 3 4 6 8 12
///////////////////////////////////////////////////////////////////////////////////////////////
