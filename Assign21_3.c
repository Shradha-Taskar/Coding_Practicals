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
        If No <= 0 then stop
        For i = 1 to No/2
            If No % i == 0
                Display i
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactors
//  Description   : Used to display all factors of a given number
//  Input         : Integer
//  Output        : None (Displays factors)
//  Author        : Shradha Dattatray Taskar
//  Date          : 04/11/2024
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid number\n");
        return;
    }

    printf("Factors of %d are:\n", iNo);

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 12   Output : 1 2 3 4 6
//  Input : 20   Output : 1 2 4 5 10
//
///////////////////////////////////////////////////////////////////////////////////////////////
