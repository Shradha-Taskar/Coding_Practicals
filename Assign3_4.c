/*
    Algorithm
    START
        Accept one character from user as ch
        If ch is between 'a' and 'z'
            Convert to uppercase using ch - 32
        Else if ch is between 'A' and 'Z'
            Convert to lowercase using ch + 32
        Display the converted character
    STOP
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : It converts case of entered character
//  Input         : Character
//  Output        : None
//  Author        : Shradha Dattatray Taskar
//  Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Converted character: %c", cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Converted character: %c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character: ");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
// Test Cases: Input: a Output: A | Input: D Output: d
///////////////////////////////////////////////////////////////////////////////////////////////
