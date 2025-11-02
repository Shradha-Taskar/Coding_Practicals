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
        If the number is negative, convert it to positive
        Initialize iMult = 1
        From i = 1 to No/2
            If No % i == 0
                Multiply iMult = iMult * i
        Return iMult
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//     Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description   : Used to find multiplication of all factors
//  Input         : Integer
//  Output        : Integer
//  Author        : Shradha Dattatray Taskar
//  Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int i = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 12   Output : 144
//  Input : 13   Output : 1
//  Input : 10   Output : 10
//
///////////////////////////////////////////////////////////////////////////////////////////////
