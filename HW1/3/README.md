# README.md for hw-1 / problem-1
#MUHAMMAD RASHID
#HW/3
#reference https://www.tutorialspoint.com/learn_c_by_examples/mode_program_in_c.htm
#reference Nicholas Chin

START
#Step 1 - Take 5 variales from the user via STDIN
#Step 2 - For mean: sum the variables
#Step 3 - Divide the sum by 5
#Step 4 - Print \n Mean Value =
#Step 5 - For median: order numbers in ascending order
#Step 6 - Put integers in an array
#Step 7 - Make outer iteration for i < n-1 (since array[] starts at a[0])
#Step 8 - Make inner iteration for j (for loops and if statements)
#Step 9 - Choose middle number (a[2] in this case)
#Step 10 - Print \n Median Value =
#Step 11 - For mode: Find the most frequent integer
#Step 12 - Make outer iteration for i < n
#Step 13 - Make inner iteration for j < n
#Step 14 - Find if previous number is less than or equal to next number 
#Step 15 - If occurence of same numbers happen with one integer value, then that is the mode

functions HW1/3 {
	FOR i = 0 to n DO
		FOR j = 0 to n-1 DO
			PRINT " "
		END FOR

		FOR j = 0 to i DO 
			PRINT ("Median Value = \n", array[2])
		END FOR

		PRINT \n
	END FOR
}
{	
	PRINT " "
	SUM = a + b + c + d + e
 	MEAN = SUM/5
	PRINT ("Mean Value = \n", MEAN)
}
{
	FOR i = 0 to n DO
		FOR j = 0 to n DO
			IF a[j] == a[i] DO
				++count
		END FOR
		
		IF count > maxCount DO
			maxcount = count;
			maxValue = a[i]
	END FOR
	PRINT ("Mode Value = \n", mode(j,n))

#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
// bubble sort function
void bubbleSort(int array[], int n)
{
    int i, j;
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
    int a, b, c, d, e;
    int mean;
    int sum;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum = a+b+c+d+e;
    mean = sum / 5
    printf("Mean = %0.2f\n", mean);

    int array[]= {a,b,c,d,e};
    bubbleSort(array,5);

    printf("Median = %d\n", array[2]);

    int n = 5;
    int j[] = {a,b,c,d,e};

    printf("Mode = %d\n", mode(j,n));

    return 0;
} 
