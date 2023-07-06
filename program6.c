/////////////////////////////////////////////////////////////////////////////////////////////////

// Problem statement : Accept number from user and check whether it is divisible by 5 or not

// Input : 23
// Output : 23 is not divisible by 5

// Input : 25
// Output : 25 is divisible by 5

// Input : -20
// Output : -20 is not divisible by 5

/////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////
//Algorithm
/////////////////////////////
/*
     START
         Accept number from user as NO
         Divide that NO by 5 and check the value of remainder
         If the value is 0 
            Then display as NO is divisible by 5 
         otherwise 
            Diplay as NO is not divisible by 5
     END
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function Name :  
// description :
//  input  :  integer 
// output :    integer 
//  author :  prachi anand barve 
//  date :   12/10/2022
//
/////////////////////////////////////////////////////

int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;
    
    if(iAns == 0)
    {
       return 1;
    }
    else
    {
       return 0;
    }   
}

////////////////////////////////////////////
//    Entry point of application 
/////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number ; \n");
    scanf("%d",&iValue);
    
    iRet = DivisibleByFive(iValue);
    if (iRet ==0)
    {
       printf("%d is not divisible by 5\n",iValue);
    }
    else
    {
     printf("%d is divisible by 5\n",iValue);
    }
    
    return 0;
}

//////////////////////////////////////////////////
// result 
//  input : 25
//output : 25 is divisible by 5
/////////////////////////////////////////////
