//Author:KD                                                                                                             © Mr.Dhar 09-09-2021          
// Creation Date : 08-09-2021
// Purpose >>>   
         //  Write a C program  compare the running times (in milliseconds) of follwing
		 //1st.Bubble Sort 
		 //2nd.Merge Sort 
		 // Required Array Is : {1,3,42,2,41,66,66,33,98,0}
		 
#include<stdio.h>    //  Pre-Processive to include standard input and output funtion header files
#include<stdlib.h>
#include<time.h>    // The time.h header file contains definitions of functions to get and manipulate date and time information. 

int k1,k2;

void swap(int *var1, int *var2)  	//pass the address of the variables to swap
{ 					
	int haed; // Declaraing head varibale to store adress of variable 1 and 2 respectively 
	haed=*var1; // assigning variable 1 to haed 
	*var1=*var2;
	*var2=haed;
}
void bubbleSort(int *arr, int size)
{
	
	int i, j; // Declaring i as sort_index and j as unosorted_index
	for (i= 0;i< (size-1); ++i) // initiating for loop 
	{
		for (j= 0;j< (size-(i+1)); ++j)
		{
			if (arr[j]>arr[j+1]) //using if loop for iterating array
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}      
}

void merge(int *arr, int le, int me, int re) //
{
	
	 k1 = me-le+1;
	 k2 = re-me;                     //re-(me+1)+1;
	int Arr1[k1], Arr2[k2]; // Decalraing Two Array Variable with int data type 
	int a,b,c;
									 //Copy data to temp arrays Arr1[] and Arr2[] */
    for (a= 0; a< k1; a++)
        Arr1[a] = arr[le +a];
    for (b= 0; b< k2; b++)
        Arr2[b] = arr[(me + 1) +b];
	b = 0;                                           // Initial index of first or left subarray
    a = 0;                                           // Initial index of second or right subarray
    c = le;                                          // Initial index of merged subarray
    while(a<k1 && b<k2){
    	if (Arr1[a]<=Arr2[b])
    	{
    		arr[c] = Arr1[a];
    		a++;
    	} else{
    		arr[c] = Arr2[b];
    		b++;
    	}
    	c++;
    }
    while (a< k1) { // right is empty
        arr[c] = Arr1[a];
        a++;
        c++;
    }
    while (b< k2) { // left is empty
        arr[c] = Arr2[b];
        b++;
        c++;
    }
}
void mergeSort(int *arr, int le, int re)
     {                                    					   //recursive function
	int me;
				/* le is for left index and re is right index of the sub-array of arr to be sorted 
	 					split if there are more than 1 elements: when le<re */
	if (le < re)
	{
									/* split the array and length = (re-le)+1
										we will use (le+re)/2 */
		me = (le+re)/2;
											// call mergeSort() for left subarray
		mergeSort(arr, le, me);
										// call mergeSort() for right subarray
		mergeSort(arr, me+1, re);
										// merge the left and right subarray
		merge(arr, le, me, re);
	}
}
int printArray(int *arr, int size)
{
	int take1; // Counter variable  for printing sort ed
	for (take1 = 0; take1 < size; ++take1)
	{
		
		printf("\nArray Your Entered Is..."); // 
		printf("\narr[%d] = %d", take1, *(arr+take1)); // Printing the Required Array
	}
	return (take1+1);										// returns the number of elements printed
}
int getInput(int *arr, int size)
{
	int take2; // counter variable for taking  unsorted array
	for (take2= 0; take2 < size; ++take2)
	{
		printf("Enter arr[%d]=",take2);
		scanf(" %d", (arr+take2));        // taking array fromm user 
	}
	return (take2+1);// returns the number of elements read
}

int main()
{
	int arr[10];// declaraing array with size 10 
	int ch;
	printf("\n\n\t\t\t\t\t\t  Welcome to Tiem Machine\n\n");	
printf("\n   \t\t     KD$$        ---->>>>>		Tiem Calculator		<<<<<------    KD$$ \n\n\n");
    printf("\n Required Array :>> [1, 3, 42, 2, 41, 66, 66, 33, 98, 0 ]   \n\n");
    getInput(arr, 10);  // returns a collection of all INPUT elements in a form. 
	                    // Use optional type and name arguments to restrict the search on these attributes.
    
	clock_t begin = clock(); //The C library function clock_t begin returns the number of clock ticks elapsed since the program was launched.
	
    bubbleSort(arr, 10);  /* Function to for bubblesort an array */
    printArray(arr, 10);  /* Function to print an array */
    printf("\n\n");
    clock_t end = clock();  //The C library function clock_t end returns the number of clock ticks elapsed since the program was ended.
    
    float duration = (float)(end - begin) / CLOCKS_PER_SEC; //  It will convert the number of CPU cycles to the CPU time taken by the process as shown in the following code:
    
	printf("Bubble sort Completed By Compiler In : %f ms\n", duration * 1000); //   // Dividing a count of clock ticks by this expression yields the number of seconds.
    printf("\n\n");
    begin = clock();
    mergeSort(arr, 0, 9); /* Function to for merge_sort an array */
    printArray(arr, 10);   /* Function to print an array */
    printf("\n\n");
    end = clock();
    duration = (float)(end - begin) / CLOCKS_PER_SEC; // It will convert the number of CPU cycles to the CPU time taken by the process .
    printf("Merge sort Completed By Compiler In : %f ms\n", duration * 1000);
    do
	{
	printf("\n    1.Press 1 For Getting Question");
    printf("\n    2.Press 2 For Answer");
    printf("\n    3.Press 3 To Exit From A program\n\n");
    scanf("%d",&ch);
    printf("\n\nYou Pressed  %d \n",ch);
	printf("\n\nWait Processing Your Choice.......\n");
    switch(ch)
    {
    	case 1:
    		printf("\n\t\tWhich algorithm is faster  Bubble OR Merge and why? ");
    		break;
    	case 2:
    printf("\n\t\tWhich algorithm is faster  Bubble OR Merge and why?\n\n ");
    printf("\n  1.)Bubble sort is a simple sorting algorithm. ");
	printf("\n  2.)This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. ");
	printf(" \n 3.)Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. ");	 
	printf(" \n 4.)Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. ");
	printf(" \n 5.) First Iteration (Compare and Swap)" );
	printf(" \n 6.)   Starting from the first index, compare the first and the second elements.");
	printf("\n  7.)If the first element is greater than the second element, they are swapped. ");
	printf("\n  8.)Now, compare the second and the third elements. Swap them if they are not in order. ");
	printf("\n  9.)The above process goes on until the last element.");
	printf(" \n 10.)The same process goes on for the remaining iterations. ");
	printf(" \n 11.)After each iteration, the largest element among the unsorted elements is placed at the end.");
	printf(" \n 12.)The array is sorted when all the unsorted elements are placed at their correct positions.");
	printf(" \n 13.)Bubble Sort Applications");
	printf(" \n 14.)Bubble sort is used if comlexity does not matter");
	printf(" \n 15.)Bubble sort is used if short and simple code is preferred");
	printf("\n\t\tThanks");
	break;
	case 3: exit(0);
        break;

	default:
        printf("Invalid choice! :/");
           break;
            }
     printf("\n Do you want to continue? (Press y/n): -->    ");
scanf(" %c",&ch);
}while(ch=='y'   || ch=='Y');
}
