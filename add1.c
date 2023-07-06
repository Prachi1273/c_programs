/*
   steps to develope the application 
   
   step 1: understand the problem statement 
   step 2: write the algorithm 
   step 3: decide the programming language
   step 4: write the program 
   step 5: test the program 
*/


//accept n no.s from user and perform addition 

// input
// values of n = 5
// values : 10 20 30 40 50 

//output
//addition is : 150

// algorithm 
/*
        START
             Accept no of elememts from user 
             Allocate the memory to store that numbers 
             Accept the numbers from user 
             Perform addition of all numbers 
             Display the addition 
        END 
*/

#include<stdio.h>       //for printf and scanf
#include<stdlib.h>      //for malloc and and free

//////////////////////////////////////////////////
//
//   Application name : addition of N numbers 
//   Input : N numbers 
//   output : Addition 
//   Author : Prachi Anand Barve 
//   Date : 18/09/2022
//
///////////////////////////////////////////////////

int main()
{
   int *arr = NULL;  //pointer to hold the address of array
   int isize = 0;     //variable who hold size of array
   int isum = 0;
   register int i = 0;
  
   printf("Please enter how many elements you want?\n");
   scanf("%d",&isize);
   
   //Allocate the memory
   arr = (int *)malloc(isize * sizeof(int));
   printf("MEMORY ALLOCATION IS SUCCESSFUL\n");
   
   printf("Please enter the elements \n"); 
   
   for(i = 0; i < isize; i++)
   {
       scanf("%d",&arr[i]);
   }
   
   //Perfrom addition 
   for(i = 0; i < isize; i++)
   {
       isum = isum +arr[i];
   }
   
   printf("Addition is %d\n",isum);
   
   free(arr);
   printf("MEMORY GETS DEALLOCATED ");
   
   return 0;
}
