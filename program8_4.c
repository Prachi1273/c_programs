#include<stdio.h>

void DisplayTable(int iNo1)
{
  if(iNo1<0)
  {
     iNo1=-iNo1;
  }
  
  int i=0,imult=1;
  
    for(i=1;i<=10;i++)
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
   
   DisplayTable(iValue1);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program8_4exe
Enter number :5
5	10	15	20	25	30	35	40	45	50	prachi@Prachi:~/LBHW$ ./program8_4exe
Enter number :-5
5	10	15	20	25	30	35	40	45	50	prachi@Prachi:~/LBHW$ ./program8_4exe
Enter number :2
2	4	6	8	10	12	14	16	18	20	prachi@Prachi:~/LBHW$ 


*/
