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
        If No is less than 10
            Display "Hello"
        Otherwise
            Display "Demo"
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
//  Function Name : DisplayMessage
//  Description   : It is used to display "Hello" if the number is less than 10, 
//                  otherwise it displays "Demo"
//  Input         : Integer
//  Output        : Void
//  Author        : Shradha Dattatray Taskar
//  Date          : 25/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

int Display (int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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
    printf("Enter the number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
 }
 
///////////////////////////////////////////////////////////////////////////////////////////////
//  Test Cases successfully handled by the application
//
//  Input : 5       Output : Hello
//  Input : 12      Output : Demo
//  Input : -8      Output : Hello
//
///////////////////////////////////////////////////////////////////////////////////////////////
