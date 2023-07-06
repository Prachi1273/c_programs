#include<stdio.h>

void NonFactors(int iValue)
{
  int iCnt=0;
  for(iCnt=1;iCnt<iValue;iCnt++)
  {
     if((iValue%iCnt)!=0)
     {
       printf("%d\t",iCnt);
     }
  }
}

int main()
{
  int iNo=0;
  
  printf("Enter number : ");
  scanf("%d",&iNo);
  
  NonFactors(iNo);
  
  return 0;
}

/*
  result 
  prachi@Prachi:~/LBHW$ ./program4_3exe
Enter number : 12
5	7	8	9	10	11	prachi@Prachi:~/LBHW$ ./program4_3exe
Enter number : 13
2	3	4	5	6	7	8	9	10	11	12	prachi@Prachi:~/LBHW$ ./program4_3exe
Enter number : 10
3	4	6	7	8	9	prachi@Prachi:~/LBHW$ 



  
*/
