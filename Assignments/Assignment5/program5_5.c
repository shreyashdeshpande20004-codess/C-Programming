/*
5 — Identify Character Type
Problem Statement: Accept a single character and determine whether it is an uppercase alphabet, lowercase
alphabet, digit, or special character. Use character comparisons without using library character-classification
functions.
Expected Output:
• Input: A → Uppercase Alphabet
• Input: m → Lowercase Alphabet
• Input: 7 → Digit
• Input: @ → Special Character
*/

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValuee)
{   
    if((cValuee >= 'A') && (cValuee <= 'Z'))
    {
        printf("Uppercase Alphabet");

    }
    else if((cValuee >='a') && (cValuee <= 'z'))
    {
        printf("Lowercase alphabet");
    }
    else if((cValuee >= '0') && (cValuee <='9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
// Write your logic here
}
int main()
{
    char cValue = '\0';

    printf("Enter a character: \n");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}