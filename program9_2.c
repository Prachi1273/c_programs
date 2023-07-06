#include<stdio.h>

int DollerToINR(int iNo1)
{ 
   int inr=1;
   inr=iNo1*70;
   return inr;
}

int main()
{
   int iValue1=0,iRet=0;
   
   printf("Enter number in us doller:");
   scanf("%d$",&iValue1);
   
   iRet=DollerToINR(iValue1);
   
   printf("Value in INR is %d\n",iRet);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program9_2exe
Enter number in us doller:10
Value in INR is 700
prachi@Prachi:~/LBHW$ ./program9_2exe
Enter number in us doller:3
Value in INR is 210
prachi@Prachi:~/LBHW$ ./program9_2exe
Enter number in us doller:1200
Value in INR is 84000


*/
