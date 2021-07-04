//Author:Kavya Dhar                                                     © Mr.dhar 7-June-2021
// Purpose ;  // MENU FOLDER
           // 1) Inserting/Push an Element in an Array
           // 2) Deleting/Pop an Element in an Array
           // C Program to Implement two Stacks using a Single Array & Check for Overflow & Underflow
 
#include <stdio.h>//  Pre-Processive to include standard input and output funtion header files 

#include <stdlib.h>   // Pre-Processive to include standard Libraray funtion header files (only Used for Exit function)


int top1, top2, array[10]; // Global Variable
// CASE For Push/Inserting An Element
void push()
{
    int x, ch; // Variable declratation
    if (top1 == top2 - 1)
    {
        printf("STACK IS IN OVERFLOW GUYS\n");
        return;
    }
    printf("Enter Any Number \n");  
    scanf("%d", &x);
    printf("\n Press 1 to push the element in 1st stack or Press 2 for stack 2:");
    scanf("%d", &ch);
    if (ch == 1)
        array[++top1] = x;
    else
        array[--top2] = x;
    printf("%d element is successfully pushed \n", x);
    return;
}
// CAse for deleting element from array
void pop()
{
    int y, ch;
    printf("\n Press 1 to pop the element from 1st stack or Press 2 for from stack 2");
    scanf("%d", &ch);
    if (ch == 1)
    {
        if (top1 == -1)    // Condition for checking If Stack 1 is Empty
        {
            printf("STACK IS IN OVERFLOW GUYS \n");
            return;
        }
        y = array[top1];
        array[top1--]=0;
    }
    else
    {
        if (top2 == 10) // Condition for checking If Stack 2 is Empty
        {
            printf("STACK IS IN UNDERFLOW GUYS \n");
            return;
        }
        y = array[top2];
        array[top2++] = 0;
    }
    printf("%d is successfully poped from stack \n", y);
    return;
}
// CAse for Viewing Stack 1
void display1()
{
   if(top1 == -1)
      printf("\nAww Stack is Empty boe !!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top1; i>=0; i--)
	 printf("%d\n",array[i]);
   }
}
// CAse for Viewing Stack 2
void display2()
{
   if(top2 == -1)
      printf("\n Aww Stack is Empty boe !!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=0; i=top2; i--)
	 printf("%d\n",array[i]);
   }
}   
void main()    // Main Funtion
{
    int ch;
    top1 = -1, top2 = 10;// local Variable
	 
    do
    {   printf("\nMenu Folder\n");
        printf("\n1.Push\n");
        printf("\n2.Pop\n");
        printf("\n3.Display\n");
        printf("\n4.Exit\n");
        printf("\nEnter Choice from (1-4)\n");
        scanf("\n%d", &ch);
        switch (ch)
        {
        case 1:push(); // case for push
            break;
            
        case 2:pop();  // case for pop
            break;
            
        case 3:display1();  // case for display stack 1
            break;
            
        case 4: display2(); // case for stack 2
				break; 
				  
        case 5:exit(0);
        		break;
        		
        default:printf("You entered an out of range value boe \n");
            break;
            
        }
    } while (ch != 5);
}
