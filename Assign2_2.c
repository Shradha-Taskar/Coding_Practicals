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
        Accept one number from the user as No
        If the input is negative, convert it into positive
        Use a loop to print '*' on the screen equal to the value of No
        Stop after printing all the stars
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
//  Function Name : DisplayStars
//  Description   : It is used to display the given number of stars on the screen
//  Input         : Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Write Updater
    while (iNo > 0)
    {
        printf("*");
        iNo--;
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

    printf("Enter the number:");
    scanf("%d", & iValue);

    Display(iValue);
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//
//  Input : 5       Output : *****
//  Input : -3      Output : ***
//  Input : 0       Output : (No output)
//
///////////////////////////////////////////////////////////////////////////////////////////////