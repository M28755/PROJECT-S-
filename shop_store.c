/*
.NAME:       OMONDI MICHAEL OTIENO
REG NO:     PA106/G/28755/25
DATE:        6/11/2025
DISCRIPTION: A C Program to read the transaction and calculate the total sales

*/
#include <stdio.h>

int main()
{ // file pointer
    FILE *MSTJ;

    // variable declaration

    float transaction;
    float total_sales = 0.0;

    // opening the file for creation and write the transaction
    MSTJ = fopen("c:\\Users\\Omotech\\Documents\\Projects\\sales_file.txt", "a");
    // check if the file exist
    if (MSTJ == NULL)
    {
        printf("Error on opening the file,file does not exist");

        return 1;
    }
    fseek(MSTJ, 0, SEEK_END); // prevent the "SALES TRANSACTION " every time the saler enter new transaction
    float file_size = ftell(MSTJ);
    if (file_size == 1)
    {
        fprintf(MSTJ, ">>>>>>>> SALES TRANSACTION <<<<<<<<<<<"); // pr
    }

    // enter the transaction
    /*
    prompt the saler to entr the transaction untile the end of the day where press n
    for stop/no, y for contonuining recording


    */
    char choice;
    // give the saler the condition of the system
    printf("\n Enter The transaction .\n press 'n' to end the record of transaction.");
    do
    {
        // prompt sale to enter sale transactio
        printf("\n Enter sale transaction:\t");
        scanf("%f", &transaction);
        fprintf(MSTJ, "\n%.2f", transaction); // save each transaction to the file

        printf("\n Add anothe transaction (y/n):\t"); // ask the saler if he need to continue with transactin record
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(MSTJ); // close the file for writing

    //
    ///
    /////
    // system read the transaction and calculate it
    //  i. read all transactions from the file
    MSTJ = fopen("c:\\Users\\Omotech\\Documents\\Projects\\sales_file.txt", "r");
    // check if the file exist
    if (MSTJ == NULL)
    {
        printf("Error on opening the file,file does not exist");

        return 1;
    }
    while (fscanf(MSTJ, "%f", &transaction) == 1)
    {
        //  ii. Calculates  the total sales for the day.
        total_sales += transaction;
    }
    // ii. display the total sales of tha date
    printf("\n The Total Sale: %.2f", total_sales);

    // iii. clossing the file
    fclose(MSTJ);
    return 0;
}