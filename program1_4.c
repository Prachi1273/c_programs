//////////////////////////////////////////////////////////////
// Problem statement : Accept one number and check whether it is divisible by 5 or not
////////////////////////////////////////////////////////////////
//                        Algorithm
////////////////////////////////////////////////////////////////
/*
    START 
    Take numbers from user 
    create a function in which there is if condition that 
    if number % 5 == 0 then return true
    else return false
    if true then print number is divisible by 5
    or if false then print number is not divisible by 5 
    END 
*/
///////////////////////////////////////////////////////////////
//
//  Function name : check
//  description : function in which there is if condition that if number % 5 == 0 then return true else return false
//  Input :  integer 
//  output : print as per input divisible by 5 or not 
//  Author : Prachi Anand Barve
//   Date :   18/10/2022 
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

int Check(int iNo)
{
   if((iNo %5)== 0)
   {
     return true;
   }
   else
   {
     return false;
   }
}

int main()
{
   int iValue = 0;
   bool bRet = false;
   
   printf("Enter number : ");
   scanf("%d",&iValue);
   
   bRet = Check(iValue);
   
   if(bRet == true)
   {
      printf("Divisible by 5\n");
   }
   else
   {
      printf("Not divisible by 5\n");
   }
   
   return 0;
}

///////////////////////////////////////////////////////////////
//
// Result : 
//          Enter number : 25
//          Divisible by 5
//          Enter number : 6
//          Not divisible by 5
//
/////////////////////////////////////////////////////////////////
