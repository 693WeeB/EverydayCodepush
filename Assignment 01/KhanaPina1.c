
        // //if they have much money then they will eat that or 
        // if they have less money then they will eat something else

#include <stdio.h>

int main()
{
    int money;
    printf("Enter how much money they have = ");
    scanf("%d", &money);

    if (money >= 1000)
    {
        printf("They will eat Three Kacchi");
    }
    else if (money >= 500)
    {
       printf("Thet will eat One Large Pizza");
    }
    else if ( money >= 250)
    {
       printf("They will eat Three Small Burger");
    }
    else if (money >= 100)
    {
        printf("They will eat Three Fuchka");
    }
    else
    {
        printf("They will eat nothing");
    }
    
    return 0;  
}