# Student-Records-Management
**Program description**
This program executes different functions on C structure and use dynamic memory allocation instead of static arrays, all the functions
performed are selected from the given menu.
-----------------------------------------------------------------------------------------------------------------------------
**Menu definition**
The menu have 7 choises :
1. Print all records
2. Print number of records
3. Print size of database
4. Add record
5. Delete record
6. Print number of accesses to database
7. Exit
For all the other values, the program will print a non valid option choosed to guide the user.

-----------------------------------------------------------------------------------------------------------------------------
**Data structure**
The data structure Student we used is a C structure.
The first variable is a string called name
The second variable is an integer called roll no
The third variable is an integer called marks

The structure uses dynamic memory allocation instead of array
and function student_record is used to give some records to structure.

------------------------------------------------------------------------------------------------------------------------------
**Functions**

1) add_record(structure) :
		
		input: structure
		output: structure
		description: Take pointer to the structure as input and add one more record to it and return the new pointer back.


2) del_record(structure)

		input: structure
		output : structure
		descrption : takes pointer to the structure as input and deletes the last record and return the new pointer back.

3) print_record(structure)

		input: structure
		output : void
		description : takes pointer to the structure as input and print all the records availabe in database.

4) calc_size()

		input : void
		output : integer 
		description : take count of records and multiply it by the size of one record to return the size of whole database.

5) count_records()

		input : void
		output : integer 
		description : return the count of records in database.

6) accesses_database()

		input : void
		output : integer 
		description : return the count of accesses to database.
------------------------------------------------------------------------------------------------------------------------------------		
**Files used**
records.h : contains the functions prototypes.
records.c : contains the functions body.
main.c : contains the main program.


-------------------------------------------------------------------------------------------------------------------------------------
