# README.md for hw-1 / problem-4

# ALGORITHM
	START
	  STEP - 1 Get input of cents from user via STDIN
	  STEP - 2 Use formula to calculate quarters (divide cents by 25)
	  STEP - 3 Use formula to calculate dimes from remaining balance after being converted into quarters (divide remainder by 10)
	  STEP - 4 Use formula to calculate nickles from remaining balance (divide remainder of dimes by 5)
	  STEP - 5 Calculate remaining pennies by taking the remainder values of nickles function
	  STEP - 6 Print \n "Converted amount ="
	END

# PSEUDO
	PRINT " "
	QUARTERS = CENTS/25
	DIMES = (CENTS % 25)/10
	NICKLES = ((CENTS % 25) % 10)/5
	PENNIES = (((CENTS % 25) % 10) % 5)

# CODE
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
