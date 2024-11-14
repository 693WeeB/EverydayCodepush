//                                     Visiting Monument
// Question link : https://www.hackerrank.com/contests/b6-final-c/challenges/visiting-monument


#include <stdio.h>

int main()
{
    int numTestCases, maxNum;

    printf("Enter number of test cases: ");
    scanf("%d", &numTestCases);

    for (int caseNum = 1; caseNum <= numTestCases; caseNum++)
    {
        printf("Enter the value for N: ");
        scanf("%d", &maxNum);

        for (int i = 1; i <= maxNum; i++)
        {
            printf("%d ", i);
        }
        for (int i = maxNum - 1; i >= 1; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
