/*
    Algorithm
    START
        Accept one character as ch
        If ch is one of a, e, i, o, u or A, E, I, O, U
            return TRUE
        Else
            return FALSE
    STOP
*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Check whether character is vowel or not
//  Input         : Character
//  Output        : BOOL
//  Author        : Shradha Dattatray Taskar
//  Date          : 01/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character: ");
    scanf(" %c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet==TRUE)
        printf("It is Vowel");
    else
        printf("It is not Vowel");

    return 0;
}
