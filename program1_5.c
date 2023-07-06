///////////////////////////////////////////////////////////////////////////
// Problem Statement : Accept one number from user & Print number of * on screen
/////////////////////////////////////////////////////////////////
//                        Algorithm
///////////////////////////////////////////////////////////////
/*
    START
    Accept number from user
    create the function which contains a loop 
    call the function in main
    then loop from function gets print * 
    END
*/  
//////////////////////////////////////////////////////////////
//
//  Function Name : Accept()
//  Description : loop which is printing our data
//  Input:  integer
//  output : number of * will print
//  Author : Prachi Anand Barve
//  Date :  18/10/2022
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("*");
   }
}

int main()
{
  int iValue = 0;
  
  printf("Enter how many times to print data : ");
  scanf("%d",&iValue);
  
  Accept(iValue);
  
  return 0;
}

///////////////////////////////////////////////////////////////
//
// Result : 
//           Enter how many times to print data : 5
//           *****
//
////////////////////////////////////////////////////////////////
