//Author:Kavya Dhar
// Creation Date : 26-05-21
// Purpose >>>   
           // >>>> Creating Structure
           // >>>> Printing Students Details

/* Program to understand array of structures*/

#include<stdio.h>   //  Pre-Processive to include standard input and output funtion header files

#include <stdlib.h>  // Pre-Processive to include standard Libraray funtion header files


struct Kavya //  Structure Functioning
 {
                char name[25]; // declared variable "name"with data type char along with size 20
                int rollno; // declared variable "roll no"with data type int 
                float marks; //  declared variable "marks"with data type float
               };
int main() // main function 
{
        int i;
        struct Kavya d[5];
        printf("<<<<<                :)			Welcome to DHar's DBMS			(:       >>>>>");
        printf("\n Enter name, roll no. and marks Below ::     ");

        for(i=0; i<5; i++)
        {
                printf("\nEnter %d record :: \n",i+1);

                printf("Enter Name :: ");
                scanf("%s",d[i].name);
                printf("Enter RollNo. :: ");
                scanf("%d",&d[i].rollno);
                printf("Enter Marks :: ");
                scanf("%f",&d[i].marks);

        }
        printf("\n\tName\tRollNo\tMarks\t\n");
        for(i=0; i<5; i++)
                printf("\t%s\t%d\t%.2f\t\n", d[i].name, d[i].rollno, d[i].marks);

                return 0;
}


