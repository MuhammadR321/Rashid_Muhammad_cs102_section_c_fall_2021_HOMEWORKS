#include <stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
// bubble sort function
void bubbleSort(int array[], int n)
{     int i, j;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++) if (array[j] > array[j+1])
			swap (&array[j], &array[j+1]);
}

int mode(int a[], int n)
{
	int maxValue = 0, maxCount = 0, i, j;

	for (i = 0; i < n; ++i) {
		int count = 0;

		for (j = 0; j < n; ++j) {
			if (a[j] == a[i]) ++count;
		}

		if (count > maxCount) {
			maxCount = count;
			maxValue = a[i];
		}
	}

	return maxValue;
}

int main()
{
	printf("Enter Integer Values = \n");
	int a, b, c, d, e;
	int sum;
	float mean;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	sum = a + b + c + d + e;
	mean = sum/5.0;

	printf("Mean = %0.2f\n", mean);

	int array[]= {a,b,c,d,e};
	bubbleSort(array,5);

	printf("Median = %d\n", array[2]);

	int n = 5;
	int j[] = {a,b,c,d,e};
	printf("Mode = %d\n", mode(j,n));

	return 0;
}
