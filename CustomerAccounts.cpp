/******************************
   Team Name:The Terminators
   Date: 9-25-2019
   File Name spc12-16.cpp
   Description:
Your group project is on page 717, assignment number 16 - Customer Accounts.
You will use the starter template that I have provided below to design and write this project.
You should each take on approximately the same workload while writing this project.
Please use your team name in the comment block of the project.
IMPORTENT! Please make sure to include comments and make sure to tag your initials in the comment blocks next to code that you've written.
********************************/
// Chapter 12, Programming Challenge 16: Customer Accounts
// Headers
#include"pch.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;


// Constant for array sizes
const int SIZE = 45;

fstream custFile;      // Customer file
fstream tempFile;      // For deletion swap

struct Customer
{
	char name[SIZE];
	char address[SIZE];
	char city[SIZE];
	char state[SIZE];
	char zip[SIZE];
	char phone[SIZE];
	double balance;
	char lastPay[SIZE];
};

// Function prototypes
void setInfo(long);     // write record to file
void display(long);     // display one record
long search();          // find a record & return file position
void deleteRec(long);   // delete one record
void showAll();         // display all records

// flags to signal setInfo()
bool rnew = false;      // To signal if the record is new  
bool mod = false;       // To signal if the record is being modified

int main()
{


	return 0;
}

// *****************************************************************
// The setInfo function write record to the file.                  *
// *****************************************************************
void setInfo(long fp)
{


}
// *****************************************************************
// The display function displays a single record.                  *
// *****************************************************************
void display(long fp)
{

}

// *****************************************************************
// The search function returns the file pointer position.          *
// *****************************************************************
long search()
{

}

// *****************************************************************
// The showAll function shows all the customer records.            *
// *****************************************************************
void showAll()
{

}

// *****************************************************************
// This function marks a record for deletion by placing            *
// the null terminator at the beginning of the name member.        *
// The contents of the file are then copied to a temporary file,   *
// then the temporary file is copied back to the Customer file     *
// -- without the deleted record.                                  *
// Ideally, this function would be expanded to allow multiple      *
// record deletions before the final file swap takes place.        *
// *****************************************************************
void deleteRec(long fp)
{

}