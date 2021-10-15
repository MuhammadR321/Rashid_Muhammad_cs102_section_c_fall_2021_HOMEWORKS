# README.md for hw-2 / problem 1

	START
	  Step 1 - Use "double" to declare dimension variables as any real input values
	  Step 2 - Ask user to input dimension values
	  Step 3 - Define perimeter to be twice the first input plus twice the second input
	  Step 4 - Print \n Perimeter of Rectangle =
	END

# PSUEDO:
	PRINT " "
	PERIMETER = (2*a + 2*b)
	PRINT ("PERIMETER OF RECTANGLE = \n", PERIMETER)

# Code:
	#include <stdio.h>
	#define SUCCESS 0

	int main(void) {

        	double a, b;
        	float perimeter;

        	printf("Enter Length = ");
        	scanf("%lf", &a);
        	printf("Enter Width = ");
        	scanf("%lf", &b);

        	perimeter = (2*a + 2*b);

       		printf("Perimeter of Rectangle = %0.2f\n", perimeter);

        	return(SUCCESS);
}


