
        // Let them know  which numbers are divisible by 3 or 5 from 1 to N.

#include <stdio.h>

int main()
{
    int N;
    printf("Enter The Value of N = ");
    scanf("%d", &N);

    for (int i = 1; i <= N ; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d is divisible by 3 or 5\n", N);
            printf("Yes\n", i);            
        }
        else
        {
            printf("%d is not divisible by 3 or 5\n", N);
            printf("No\n", i);
        }
    }
    printf("\n");    
}
