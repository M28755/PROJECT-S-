// To make a pyramind using a while loop

#include <stdio.h>

int main()
{ //variable
	int i ;
	int j ;
	int space ;
	int Rows;
	//prompting user to Enter the number of rows
	printf("Enter The value of Rows: \n");
	scanf("%d", &Rows);
	
	   i =1;
	   while(i <= Rows)
	   {
		 i++;
		 
		 space = i;
		 
		             while(space < Rows)//
		            {
		            	printf(" ");//print the space
		              	space++;
			 
		             }
		 
		 j = 1;
		 
		 while(j <= (2 * i - 1))
		 {
		 	printf("*");// print *
		 	
		 	j++;
			 
		 }
		 
		   printf("\n");
	   }
	
	return 0;
}