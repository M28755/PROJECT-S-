#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE*fptr; //declare a file pointer
 
    //opening the file in write mode
    fptr = fopen("C:\\Users\\JAGUAR HUNTER\\Desktop\\PROJECT-S-\\FILE-INPUT-OUTPUT\\Write\\write.txt", "a");

    if(fptr == NULL){
        printf("Error, Could not create write.txt");

        return 1;
    }
  //cra=eating text to the file
  // fprintf(fptr, "My Name is Omondi Michael Otieno \n\n");
  // fputs("This how we write to the file using w mode \n\n", fptr);

   int age;
   char name[30];


   printf("============================================================");
   printf("\n Fill The Information \n ");
    printf("============================================================ \n ");

   printf("Enter Your Name \t");
   scanf("%[^\n]", name);

   printf("\n Enter Age \t");
   scanf("%d", &age);

   fprintf(fptr,"\n =========================================\n \n");
   fprintf(fptr, "NAME: %s \n", name);
   fprintf(fptr,"AGE: %d old years", age);




    
    fclose(fptr);
    printf(" \n File was successefull created");
    return 0;
}