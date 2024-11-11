
            //Multiplying two numbers

#include <stdio.h>
int main()
{
    long long int A, B;
    printf("Enter the first number = ");
    scanf("%lld", &A);

    printf("Enter the second number = ");
    scanf("%lld", &B);

    long long int Multiply = A * B;
    printf("%lld", Multiply);

    return 0;
}