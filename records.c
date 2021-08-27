#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"records.h"

/* function for adding a record to database*/
struct Student* add_record(struct Student *ptr){
    struct Student *new_ptr;
    int i;
    count++;
    access++;

    /*initializing new memory for larger size*/
    new_ptr=(struct Student *)malloc(count*sizeof(struct Student));

    //checking for memory full condition
    if(new_ptr==NULL){
        printf("Memory not available\n");
        exit(0);
    }

    //loop to copy the data to new location
    for(i=0;i<count-1;i++)
        new_ptr[i]=ptr[i];

    printf("Enter Student's Name\n");
    scanf("%s",(new_ptr+i)->name);
    printf("Enter Student's Roll no\n");
    scanf("%d",&(new_ptr+i)->roll_no);
    printf("Enter Student's marks\n");
    scanf("%d",&(new_ptr+i)->marks);

    printf("Record successfully added!\n"
           "Name = %s\n"
           "Roll no = %d\n"
           "Marks = %d\n",
           (new_ptr+i)->name,
           (new_ptr+i)->roll_no,
           (new_ptr+i)->marks);

    /*freeing up the unused memory to prevent leaks*/
    free(ptr);
    return new_ptr;


}

/* function for delete a record to database*/
struct Student* del_record(struct Student *ptr){
    struct Student *new_ptr;
    int i;
    count--;
    access++;

    /*initializing new memory for smaller size*/
    new_ptr=(struct Student *)malloc(count*sizeof(struct Student));

    //checking for full memory condition
    if(new_ptr==NULL){
        printf("Memory not available\n");
        exit(0);
    }

    //loop to copy data to new location
    for(i=0;i<count;i++)
        new_ptr[i]=ptr[i];

    printf("Last record deleted successfully\n");

    /*freeing up the unused memory to prevent leaks*/
    free(ptr);
    return new_ptr;

}

/*function to print the database*/
void print_record(struct Student *ptr){
    int i;
    printf("Name\t\tRoll No\tMarks\n");

    //loop to print all the records from database
    for(i=0;i<count;i++)
        printf("%s\t\t%d\t%d\n",(ptr+i)->name,(ptr+i)->roll_no,(ptr+i)->marks);

}

/*function for calculating size of database*/
int calc_size(){
    return count*sizeof(struct Student);

}

/*function to return count of records in database*/
int count_records(){
    return count;
}

/*function to return access of database*/
int access_database(){
    return access;
}

/*function to give some pre-loaded records to database*/
struct Student* student_records()
{
    struct Student *ptr1 = (struct Student*)malloc(6*sizeof(struct Student));
    if(ptr1==NULL){
        printf("Memory not available\n");
        exit(0);
    }

    strcpy((ptr1+0)->name, "Mike");
    (ptr1+0)->roll_no= 21;
    (ptr1+0)->marks = 73;
    count++; access++;

    strcpy((ptr1+1)->name, "Joey");
    (ptr1+1)->roll_no= 16;
    (ptr1+1)->marks = 63;
    count++; access++;

    strcpy((ptr1+2)->name, "Aaron");
    (ptr1+2)->roll_no= 4;
    (ptr1+2)->marks = 82;
    count++; access++;

    strcpy((ptr1+3)->name, "Tyson");
    (ptr1+3)->roll_no= 35;
    (ptr1+3)->marks = 76;
    count++; access++;

    strcpy((ptr1+4)->name, "Daniel");
    (ptr1+4)->roll_no= 12;
    (ptr1+4)->marks = 93;
    count++; access++;

    strcpy((ptr1+5)->name, "Luke");
    (ptr1+5)->roll_no= 19;
    (ptr1+5)->marks = 57;
    count++; access++;


    return ptr1;

}
