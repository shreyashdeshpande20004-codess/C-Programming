#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf(" %29[^\n]", Name);

    printf("Your name is %s\n", Name);

    return 0;
}