# README.md for hw-1 / problem-3

# Algorithm
	START
	  STEP 1 - Declare and define an integer, a float integer, and a character
	  STEP 2 - Print floating number and its %d comversion
	  STEP 3 - Print integer number and its %f conversion
	  STEP 4 - Print character and its %d conversion
	END

# CODE
	#include <stdio.h>
	#define SUCCESS 0

	int main(void) {
        	int intn = 1;
        	float floatn = 5.0;
        	char character = 'M';

        	printf("Result is: %f %%d= %d\n", floatn, floatn);
        	printf("Result is: %d %%f= %f\n", intn, intn);
        	printf("Result is: %c %%d= %d\n", character, character);

        	return(SUCCESS);
}
