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
