#include <stdio.h>
#include <stdlib.h>

 void read_from_file();
 void read_from_file_2();
int main(){
     int choose;
    

      printf("1. READING LINE BY LINE\n");
      printf("------------------------------------- \n ");
      
      printf("2. READING CHARACTER BY CHARACTER \n");
      printf("------------------------------------------- \n ");



      printf("Choose Your operation: \t");
      scanf("%d", &choose);


      switch (choose)
      {
      case 1:
        read_from_file();
        break;

     case 2:
        read_from_file_2();
        break;
      
      default:
      printf("Invalid choose");
        break;
      }

    return 0;
}

void read_from_file(){

    char Buffer[1000];
    FILE*fptr;

    fptr = fopen("C:\\Users\\JAGUAR HUNTER\\Desktop\\PROJECT-S-\\FILE-INPUT-OUTPUT\\Write\\write.txt", "r");
    if(fptr == NULL){
          printf("Error on Opening The file for read");

    }

    //reading line by line 
    while (fgets(Buffer, sizeof(Buffer),fptr) != NULL)
    {
       printf("%s", Buffer);
    }
      //reading character by character

     
  if(feof(fptr)){
    puts(" \n\n Reached the End Of file");
  }

}


void read_from_file_2(){
    int ch;
    FILE*fptr;

    fptr = fopen("C:\\Users\\JAGUAR HUNTER\\Desktop\\PROJECT-S-\\FILE-INPUT-OUTPUT\\Write\\write.txt", "r");
    if(fptr == NULL){
          printf("Error on Opening The file for read");

    }

    while((ch = fgetc(fptr)) != EOF){
        putchar(ch);
    }

    fclose(fptr);

}