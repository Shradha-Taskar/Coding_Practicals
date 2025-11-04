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
        Accept marks from user as Marks
        If Marks >= 75
            Display "Grade A"
        Else if Marks >= 60
            Display "Grade B"
        Else if Marks >= 50
            Display "Grade C"
        Else if Marks >= 35
            Display "Grade D"
        Else
            Display "Fail"
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayGrade
//  Description   : Used to display grade based on student marks
//  Input         : Integer
//  Output        : None (Displays grade)
//  Author        : Shradha Dattatray Taskar
//  Date          : 03/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayGrade(int iMarks)
{
    if(iMarks >= 75)
    {
        printf("Grade A\n");
    }
    else if(iMarks >= 60)
    {
        printf("Grade B\n");
    }
    else if(iMarks >= 50)
    {
        printf("Grade C\n");
    }
    else if(iMarks >= 35)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter marks: ");
    scanf("%d", &iValue);

    DisplayGrade(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input : 82   Output : Grade A
//  Input : 48   Output : Grade C
//  Input : 30   Output : Fail
//
///////////////////////////////////////////////////////////////////////////////////////////////
