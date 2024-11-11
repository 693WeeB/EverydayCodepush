
        // Hellping to pay the Bill

#include <stdio.h>

int main()
{
    int Money;
    printf("Enter how much Money do you guy's have to khow it is divided by 3 or not = ");
    scanf("%d", &Money);

    if (Money % 3 == 0)
    {
        printf("Yes, You guy's can pay the bill together");
    }
    else
    {
        printf("NO, You guy's can't pay the bill together");
    }

    return 0;
}