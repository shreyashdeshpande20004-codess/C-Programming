/*4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/

#include<stdio.h>


void DisplayConvert ( char cVal)
{
    if((cVal >= 'a') && (cVal <= 'z'))
    {
        printf("%c",cVal-32 );
    }
    else if((cVal >= 'A') && (cVal <= 'Z'))
    {
        printf("%c",cVal+32 );
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}