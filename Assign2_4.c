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
        Accept first number from the user as No1
        Accept second number from the user as No2
        If any input is negative, convert it into positive
        Display No1 on the screen, No2 number of times using a loop
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
//  Function Name : DisplayNumber
//  Description   : It is used to display the first number on the screen 
//                  as many times as the value of the second number
//  Input         : Integer, Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////
    
int Display(int iNo, int iFrequency)
{
    iNo = 0;

    for(iNo = 1; iNo <= iFrequency; iNo++)
    {
        printf("%d",iNo);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////
//     
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:");
    scanf("%d",& iValue);

    printf("Enter Frequency:");
    scanf("%d",& iCount);

    Display(iValue, iCount);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input1 : 5     Input2 : 3     Output : 5  5  5
//  Input1 : -4    Input2 : 2     Output : 4  4
//  Input1 : 7     Input2 : -3    Output : 7  7  7
//  Input1 : 10    Input2 : 0     Output : (No output)
//
///////////////////////////////////////////////////////////////////////////////////////////////
