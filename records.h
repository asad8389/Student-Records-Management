#ifndef RECORDS_H_
#define RECORDS_H_
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//static variables to keep a count on entries and accesses
static int count,access;

//declaration of structure
struct Student{
    char name[20];
    int roll_no;
    int marks;

};

/* function for adding a record to database*/
struct Student* add_record(struct Student *ptr);

/* function for delete a record to database*/
struct Student* del_record(struct Student *ptr);

/*function to print the database*/
void print_record(struct Student *ptr);

/*function for calculating size of database*/
int calc_size();

/*function to return count of records in database*/
int count_records();

/*function to return access of database*/
int access_database();

/*function to give some pre-loaded records to database*/
struct Student* student_records();


#endif // RECORDS_H_
