# README.md for hw-1 / problem-2

# ALGORITHM
	START
	  STEP 1 - Take integer values from user
	  STEP 2 - For Hours divide input by 60
	  STEP 3 - For minutes do mod input
	  STEP 4 - Print \n Converted minutes =
	END

# PSEUDO
	PRINT " "
	HOURS = MINUTES / 60
	MINUTES = MINUTES % 60
	PRINT ("Converted minutes = %d hour %d minutes", hour, minutes)

# CODE
	#include <stdio.h>
	#define SUCCESS 0

	int main(void) {
        	int minutes;
        	int hour;

        	printf("Enter minutes to be converted = ");

        	scanf("%d", &minutes);
        	hour = minutes/60;
        	minutes = minutes % 60;
		
		if(hour <= 1) {
        			printf("Converted Minutes = %d hour %d minutes\n", hour, minutes);
		}
		else if(hour > 1) {
			 printf("Converted Minutes = %d hour %d minutes\n", hour, minutes);
		}

        	return(SUCCESS);
}
