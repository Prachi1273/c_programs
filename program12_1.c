#include<stdio.h>

void DisplayDigit(int iNo1)
{
   int idigit=0,rev=0;
   if(iNo1<0)
   {
     iNo1=-iNo1;
   }
  
   while(iNo1!=0)
   {
   
     idigit=iNo1%10;
     rev=(rev*10)+idigit;
    iNo1=iNo1/10;
     printf("%d\t",idigit);
     printf("\n");
   }
}

int main()
{
   int iValue1=0;   
   
   printf("Enter number :");
   scanf("%d",&iValue1);  
  
   DisplayDigit(iValue1);
   
   return 0;
}

/*
result :

prachi@Prachi:~/LBHW$ ./program12_1exe
Enter number :2395
5	
9	
3	
2	
prachi@Prachi:~/LBHW$ ./program12_1exe
Enter number :1018
8	
1	
0	
1	
prachi@Prachi:~/LBHW$ ./program12_1exe
Enter number :-1018
8	
1	
0	
1	
prachi@Prachi:~/LBHW$ ./program12_1exe
Enter number :9000
0	
0	
0	
9

*/
