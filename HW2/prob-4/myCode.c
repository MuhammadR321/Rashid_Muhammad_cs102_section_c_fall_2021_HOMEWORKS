#include <stdio.h>
#define SUCCESS 0
#define MAX (cents % 25)

int main(void) {
	int cents;
	int quarters;
	int dimes;
	int nickles;
	int pennies;

	printf("Enter cents to be converted = ");
	
	scanf("%d", &cents);
	quarters = cents / 25;
	dimes = MAX/ 10;
	nickles = (MAX % 10) / 5;
	pennies = ((MAX % 10) % 5);

	printf("Converted amount :\n quarters = %d\n dimes = %d\n nickles = %d\n pennies = %d\n", quarters, dimes, nickles, pennies);

	return(SUCCESS);
}
