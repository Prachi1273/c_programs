#include<stdio.h>

int OddFact(int iNo1)
{ 
   int iOddFact=1,i=0;
   if(iNo1<0)
   {
      iNo1=-iNo1;
   }
   for(i=1;i<=iNo1;i++)
   {
      if((i%2)!=0)
      {
        iOddFact=iOddFact*i;
      }
   }
   return iOddFact;
}

int EvenFact(int iNo1)
{ 
   int iEvenFact=1,i=0;
   if(iNo1<0)
   {
      iNo1=-iNo1;
   }
   for(i=1;i<=iNo1;i++)
   {
      if((i%2)==0)
      {
        iEvenFact=iEvenFact*i;
      }
   }
   return iEvenFact;
}

int DiffFact(int iValue1)
{
   int iRet1=0,iRet2=0,diff=0;
   
   iRet1=OddFact(iValue1);
   
   printf("Odd factorial of number is %d\n",iRet1);
   
   iRet2=EvenFact(iValue1);
   
   printf("Even factorial of number is %d\n",iRet2);
   
   diff=iRet2-iRet1;
   
   return diff;
}

int main()
{
   int iValue1=0,iRet=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
    
   iRet=DiffFact(iValue1);
   
   printf("Diffrence between even factorial & odd factorial is %d\n",iRet);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program9_5exe
Enter number :5
Odd factorial of number is 15
Even factorial of number is 8
Diffrence between even factorial & odd factorial is -7
prachi@Prachi:~/LBHW$ ./program9_5exe
Enter number :-5
Odd factorial of number is 15
Even factorial of number is 8
Diffrence between even factorial & odd factorial is -7
prachi@Prachi:~/LBHW$ ./program9_5exe
Enter number :10
Odd factorial of number is 945
Even factorial of number is 3840
Diffrence between even factorial & odd factorial is 2895

*/
