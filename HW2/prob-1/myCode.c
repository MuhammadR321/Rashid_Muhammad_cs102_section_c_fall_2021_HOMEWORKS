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
