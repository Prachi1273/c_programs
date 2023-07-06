#include<stdio.h>

int RangeSum(int iNo1,int iNo2)
{
   int i=0,iSum=0;
   if(iNo1>iNo2)
   {
     printf("Invalid range\n");
     
   }
   if(iNo1<0 || iNo2<0)
   {
     printf("Invalid range\n");
     
   }
   
      if((iNo1&&iNo2)>0)
      {
        for(i=iNo1;i<=iNo2;i++)
        {
           iSum=iSum+i; 
         }   
      }
   return iSum;
}

int main()
{
   int iValue1=0,iRet;
   int iValue2=0;
   
   printf("Enter starting value :");
   scanf("%d",&iValue1);
   
   printf("Enter ending value :");
   scanf("%d",&iValue2);
   
   iRet=RangeSum(iValue1,iValue2);
   
   printf("Addition of numbers from range %d to %d is:%d\n",iValue1,iValue2,iRet);
   
   return 0;
}

/*
result :

prachi@Prachi:~/LBHW$ ./program11_3exe
Enter starting value :-10
Enter ending value :2
Invalid range
Addition of numbers from range -10 to 2 is:-52
prachi@Prachi:~/LBHW$ ./program11_3exe
Enter starting value :90
Enter ending value :18
Invalid range
Addition of numbers from range 90 to 18 is:0
prachi@Prachi:~/LBHW$ ./program11_3exe
Enter starting value :23
Enter ending value :30
Addition of numbers from range 23 to 30 is:212
prachi@Prachi:~/LBHW$ ./program11_3exe
Enter starting value :10
Enter ending value :18
Addition of numbers from range 10 to 18 is:126

*/
