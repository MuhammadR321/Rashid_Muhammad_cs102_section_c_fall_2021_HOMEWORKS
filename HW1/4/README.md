# README.md for hw-1 / problem-2
#MUHAMMAD RASHID
#HW1/4

#reference HAMZA MALICk
#reference https://beginnersbook.com/2015/02/c-program-to-sort-set-of-strings-in-alphabetical-order/

START
#Step 1 - Set integer to count 3
#Step 2 - Ask for user input via STDIN
#Step 3 - The iterations of i and j lets you input 3 strings of 32 characters or less
#Step 4 - If statements sort the strings in alphabetical order
#Step 5 - Output is sorted input strings
END

functions hw-1/4 {
	FOR i = 0 to count DO
		srt[i]
	FOR i = 0 to count DO
		FOR j = i+1 to count DO
			IF COMPARE str[i], str[j]>0 
				COPY STRINGS (temp, str[i])
				COPY STRINGS (str[i], str[j])
				COPY STRINGS (str[j], temp)
	END FOR
	PRINT \n "Order of Sorted Strings"

#include<stdio.h>
#include<string.h>
#define SUCCESS 0
int main(void){
        int i,j,count = 3;
        char str[32][32],temp[32];

        puts("Enter 3 Strings = ");

        for(i=0;i<count;i++)
                gets(str[i]);
        for(i=0;i<count;i++)
                for(j=i+1;j<count;j++){
                        if(strcmp(str[i],str[j])>0){
                                strcpy(temp,str[i]);
                                strcpy(str[i],str[j]);
                                strcpy(str[j],temp);
                        }
                }
        printf("Order of Sorted Strings: \n");
        for(i=0;i<count;i++)
                puts(str[i]);

        return(SUCCESS);
}	
