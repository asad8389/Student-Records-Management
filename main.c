#include <stdio.h>
#include <stdlib.h>
#include "records.h"


/*main function*/
int main()
{
    struct Student *ptr; //pointer to the structure declaration
    int n; //variable for menu selection
    ptr=student_records(); //accessing records from the header file, delete this line if you don't want to use header file

for(;;){

        /*MENU*/
    printf("\n\n--------------------MENU--------------------\n"
           "\n============================================\n\n"
           "1. Print all records\n"
           "2. Print number of records\n"
           "3. Print size of database\n"
           "4. Add record\n"
           "5. Delete record\n"
           "6. Print number of accesses to database\n"
           "7. Exit\n\n");
    scanf("%d",&n);

    switch(n){

    case 1: //print all records
        print_record(ptr);
        break;

    case 2: //print number of records
        printf("Total no of records in database:  %d\n",count_records());
        break;

    case 3: //print size of database
        printf("Total size of database:  %d\n",calc_size());
        break;

    case 4: //add record
        ptr=add_record(ptr);
        break;

    case 5: //delete records
        ptr= del_record(ptr);
        break;

    case 6: //print number of accesses of database
        printf("Total access to the database:  %d\n",access_database());
        break;

    case 7://exit
        printf("\n\n--------------------EXIT--------------------\n");
        exit(0);

    default:
        printf("Invalid selection.\n");

    }
}

    return 0;
}











