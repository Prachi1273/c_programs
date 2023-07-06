#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo1)
{
   int idigit=0,rev=0;
   if(iNo1<0)
   {
     iNo1=-iNo1;
   }
  
   while(iNo1!=0)
   { 
     idigit=iNo1%10;
     
   
     if(idigit==0)
     {
       return true;  
       iNo1 =iNo1/10;
     }
     
   
   else
     {
       return false;
     }
     }
}

int main()
{
   int iValue1=0;  
   bool bRet=false; 
   
   printf("Enter number :");
   scanf("%d",&iValue1);  
  
   bRet = ChkZero(iValue1);
   
   if(bRet==true)
   {
      printf("Number contains zero in it ");
   }
   else
   {
      printf("Number DOES'T contains zero in it ");
   }
   
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
