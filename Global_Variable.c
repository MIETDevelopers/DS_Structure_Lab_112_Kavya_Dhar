//Author:Kavya Dhar                                                 © Mr.dhar 2-June-2021
// Purpose ; 
           // 1) Global variable Declaratation
           // 2)  Local Variable  Declaratation
           // 3) Arithmeatic Operations (Addition,Multiplicatation,Subtraction)
           
#include<stdio.h> //  Pre-Processive to include standard input and output funtion header files

#include<conio.h>  // Pre-Processive to include Console input and output funtion header files

  
    // Global variables  
    int a;  
    int b;  
    int Add()   // Funtion prototype
    {  
  
        return a + b;  
    }  
  
    int Mul()  // Funtion prototype
  
    {  
    int c=10; //Local Variable  
    int d=20;  //  Local Variable  
    return c*d;  
    }  
    int a;
    int b;
    int Subtrac()  // Funtion prototype
    {
    	return b-a;
	}
    void main()  
    {  
        int Ans1,Ans2,Ans3;     // Local variable  
        a = 50;  
        b = 70;  
          
        Ans1 = Add();  
        Ans2= Mul();  
        Ans3= Subtrac();
          
        printf("The addition result is: %d\n",Ans1);  
                  printf("The Multiplication result is: %d\n",Ans2);  
                  printf("The Subtraction result is : %d\n",Ans3);
		getch();
				    
    }  
