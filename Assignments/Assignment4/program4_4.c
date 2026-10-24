/*
4 — Check Voting Eligibility
Problem Statement: Accept the age of a person and determine whether the person is eligible to vote. A
person must be at least 18 years old to vote. A negative age should be considered invalid.
Expected Output:
• Input: 21 → Eligible for Voting
• Input: 16 → Not Eligible for Voting
• Input: -5 → Invalid Age
*/

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAgee)
{
// Write your logic here
    if(iAgee >= 18)
    {
        printf("Eligible for voting\n");
    }
    else if(iAgee <= 0)
    {   
        printf("Invalid age\n");
        
    }
    else
    {
        printf("Not eligible for voting\n");
    }

}

int main()
{
    int iAge = 0;

    printf("Enter your age: \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);
    return EXIT_SUCCESS;
}