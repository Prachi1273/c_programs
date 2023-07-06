#include<stdio.h>

int Factorial(int iNo1)
{
  if(iNo1<0)
  {
     iNo1=-iNo1;
  }
  
  int i=0,iFact=1;
  
    for(i=1;i<=iNo1;i++)
    {
       iFact=iFact*i;
    }
    return iFact;
}

int main()
{
   int iValue1=0,iRet=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
   iRet=Factorial(iValue1);
   
   printf("Factorial of number is %d\n",iRet);
   
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program8_3exe
Enter number :5
Factorial of number is 120
prachi@Prachi:~/LBHW$ ./program8_3exe
Enter number :-5
Factorial of number is 120
prachi@Prachi:~/LBHW$ ./program8_3exe
Enter number :4
Factorial of number is 24
prachi@Prachi:~/LBHW$ 

*/
