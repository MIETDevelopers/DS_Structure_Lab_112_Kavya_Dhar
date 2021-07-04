//Author:Kavya Dhar                                               © Mr.Dhar 18-06-21
// 
// Purpose ;  // 
              /*<Write a program to check if a given expression is correctly parenthesized using Stacks (Using DMA) <*/
           
#include<stdio.h>   //  Pre-Processive to include standard input and output funtion header files

#include<stdlib.h>  //  Pre-Processive to include standard library funtions(EXit funtion)
#include<string.h>
int top = -1;       //Check whether stack is FULL

int i;              // Global Declaratation

char *Jess, *KD;      // This character pointer will allow you to store values from user <..>

                    // to push elements in Jess ( Stack Name)
void push(char KD)
{
      Jess[top] = KD;
      top++;
}
                    // to pop elements from Jess (Stack Name) 
void pop()
{
      if (top == -1) 
      {
            printf("\t The expression You Entered Invalid\n");
             printf("\tRight parentheses are more than left parentheses\n");
            exit(0); // program has been executed without any error or interrupt.
      }
      else
      {
            top--;
      }
}
int main() // Main Funtion
{
      int cho, n, d;       // Local Variable
      printf("Enter the size of stack: ");
      scanf("%d",&n);
      Jess = (char*)malloc(n * sizeof(char));
	  printf("Enter the size of statement: ");
      scanf("%d",&d);
      KD = (char*)malloc(d * sizeof(char));
      printf("\tMENU");
      printf("\n---------------------------\n");
      printf("      // Our Heartiest welcome goes to you // \n   ");
	  printf("Main menu");
      printf("\n1.Check expression correctly parenthesized\n");
      printf("2.Exit");
      printf("\n---------------------------\n");
      while (1)
      {
            printf("Choose operation 1 or 2 :) ");
            scanf("%d", &cho);
            switch (cho)
            {
                  case 1:
                        printf("\nEnter expression : ");
                        scanf("%s",KD);
                        for (i = 0; KD[i] != '\0';i++)
                        {
                              if (KD[i] == '(')
                              {
                                    push(KD[i]);
                              }
                              else if (KD[i] == ')')
                              {
                                    pop();
                              }
                        }
                       if(top==-1) /*stack empty*/
        {
               			 printf("Balanced Parentheses\n");
               			 printf("Expression is Correct");
                			return 1; //there is some error while executing the program
        }
        else
        {
                printf("Left parentheses more than right parentheses\n");
                return 0; //success and returning a non-zero number means failure
                  case 2:
                      exit(0); // program has been executed without any error or interrupt.
                  default: printf("\nInvalid Choice...\n");
            }
      }
      return 0;
}
}
