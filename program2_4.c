#include<stdio.h>

void Display(int iNo,int iFrequency)
{
   int iCnt =0;
   for(iCnt=0; iCnt<iFrequency;iCnt++)
   {
      printf("%d\t",iNo);
   }
}

int main()
{
  int iValue =0;
  int iCnt=0;
  
  printf("Enter Number : ");
  scanf("%d",&iValue);
  
  printf("Enter Frequency : ");
  scanf("%d",&iCnt);
  
  Display(iValue,iCnt);
  
  return 0;
}

/*
   result : 
   
   
   HW$ ./program2_4exe
Enter Number : 12
Enter Frequency : 5
12	12	12	12	12	prachi@Prachi:~/LBHW$ ./program2_4exe
Enter Number : -2
Enter Frequency : 3
-2	-2	-2	prachi@Prachi:~/LBHW$ ./program2_4exe
Enter Number : 21
Enter Frequency : -3
prachi@Prachi:~/LBHW$ ./program2_4exe
Enter Number : -2
Enter Frequency : 0

*/
