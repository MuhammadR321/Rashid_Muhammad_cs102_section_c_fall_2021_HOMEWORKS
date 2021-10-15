#include <stdio.h>
#define SUCCESS 0

int main(void) {
	int minutes;
	int hour;

	printf("Enter minutes to be converted = ");
	
	scanf("%d", &minutes);
	hour = minutes/60;
	minutes = minutes % 60;

	printf("Converted Minutes = %d hour %d minutes\n", hour, minutes);

	return(SUCCESS);	
}
