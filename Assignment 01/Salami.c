
        //Helping to know how much salami they got

#include <stdio.h>

int main()
{
    int X;
    printf("Enter how much salami X got = ");
    scanf("%d", &X);

    int Y;
    printf("Enter how much salami Y got = ");
    scanf("%d", &Y);

    int Z;
    printf("Enter how much salami Z got = ");
    scanf("%d", &Z);

    int Salami = X + Y + Z;

    printf("Total salami they got = %d", Salami);

    return 0;
}