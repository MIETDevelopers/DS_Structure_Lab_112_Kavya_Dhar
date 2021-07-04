//Author:Kavya Dhar
// Creation Date : 25-05-21
// Purpose ; 
           // 1) Eneter an Element in an Array
           // 2) Inserting an Element in an Array
           // 3) viewing the respective Array 
           
#include<stdio.h>  //  Pre-Processive to include standard input and output funtion header files

 void insert(int *b);  // funtion prototype 

 int main(){
    int a[8],i; // variable declratation 
    printf("Enter the elements of an array\n");
    for ( i=0; i<7; i++){
        scanf("%d",&a[i]);
    }
    printf("\nelements of an array entered by user is ");
    for( i=0; i<7; i++){
        printf("\n%d",a[i]);
    }
    insert(a);
    printf("\nelements of array after execution");
    for( i=0; i<8; i++){
        printf("\n%d",a[i]);
    }
    return 0;
 }

void insert(int *b) // funtion calling 
{
    printf("\nEnter the element to insert in array\n");
    scanf("%d",(b+7));
}
