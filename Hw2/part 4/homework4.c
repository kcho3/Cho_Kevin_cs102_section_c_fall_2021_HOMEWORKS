#include <stdio.h>

int main()
{
	int quarters, dimes, nickels, pennies, cents;
	printf("Enter cents");
	scanf("%d", &cents);
	 quarters = cents/25;
    dimes = ((cents%25)/10);
    nickels =(((cents%25)%10)/5);
    pennies = ((((cents%25)%10)%5));
    printf("You have %d", quarters);
    printf(" quarters, %d", dimes);
    printf(" dimes,  %d", nickels);
    printf(" nickels, and %d", pennies);
    printf(" pennies\n");

    }




