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
        If No < 0 then convert to positive
        Initialize Product = 1
        While No != 0
            Digit = No % 10
            Product = Product * Digit
            No = No / 10
        Display Product
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ProductOfDigits
//  Description   : Used to calculate product of digits of a number
//  Input         : Integer
//  Output        : Integer (Returns Product)
//  Author        : Shradha Dattatray Taskar
//  Date          : 04/11/2024
//
///////////////////////////////////////////////////////////////////////////////////////////////

int ProductOfDigits(int iNo)
{
    int iDigit = 0, iProd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;
    }

    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = ProductOfDigits(iValue);

    printf("Product of digits is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 234   Output : 24
//  Input : 1234  Output : 24
//
///////////////////////////////////////////////////////////////////////////////////////////////
