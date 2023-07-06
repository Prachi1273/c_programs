#include<stdio.h>

int EvenFact(int iNo1)
{ 
   int iFact=1,i=0;
   if(iNo1<0)
   {
      iNo1=-iNo1;
   }
   for(i=1;i<=iNo1;i++)
   {
      if((i%2)==0)
      {
        iFact=iFact*i;
      }
   }
   return iFact;
}

int main()
{
   int iValue1=0,iRet=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
   iRet=EvenFact(iValue1);
   
   printf("Even factorial of number is %d\n",iRet);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program9_3exe
Enter number :5
Even factorial of number is 8
prachi@Prachi:~/LBHW$ ./program9_3exe
Enter number :-5
Even factorial of number is 8
prachi@Prachi:~/LBHW$ ./program9_3exe
Enter number :10
Even factorial of number is 3840


*/
