#include<stdio.h>

void RevTable(int iNo1)
{
  if(iNo1<0)
  {
     iNo1=-iNo1;
  }
  
  int i=0,imult=1;
  
    for(i=10;i>=1;i--)
    {
       imult=iNo1*i;
       printf("%d\t",imult);
    }
    
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
   RevTable(iValue1);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program8_5exe
Enter number :2
20	18	16	14	12	10	8	6	42	prachi@Prachi:~/LBHW$ ./program8_5exe
Enter number :5
50	45	40	35	30	25	20	15	10	5	prachi@Prachi:~/LBHW$ ./program8_5exe
Enter number :-5
50	45	40	35	30	25	20	15	10	5	prachi@Prachi:~/LBHW$ 

*/
