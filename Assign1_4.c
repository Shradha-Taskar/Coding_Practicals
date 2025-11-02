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
        accept int i 
        initialize the value of i = 5
        print numbers from 5 to 1
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////
//
//     Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DivisiblityCheck
//  Discription :   Used to check Divisiblity
//  Input :         int, int
//  Output :        int
//  Author :        Shradha Dattatray Taskar
//  Date :          21/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool DivisibilityCheck(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else 
    {
        return false;
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
    bool bRet = false;

    printf("Enter Number \n");
    scanf("%d\n", &iValue);

    bRet = DivisibilityCheck(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;

}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases successfully handled by the application
//  Test case 1: 
//  Input   :   5, 12
//  Output  :   Divisible by 5
//
//  Test case 2: 
//  Input   :   8, 9
//  Output  :   Not Divisible by 5
//  
///////////////////////////////////////////////////////////////////////////////////////////////
