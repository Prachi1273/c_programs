#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iValue)
{
   if((iValue%2)==0)
   {
      return true;
   }
   else 
   {
   return false;
   }
}

int main()
{
  int iNo=0;
  bool bChk=false;
  
  printf("Enter number : ");
  scanf("%d",&iNo);
  
  bChk=CheckEvenOdd(iNo);
  
  if(bChk==true)
  {
    printf("Number is EVEN");
  }
  else
  {
     printf("Number is ODD");
  }
  
  return 0;
}

/*
  result :
    prachi@Prachi:~/LBHW$ ./program2_5exe
Enter number : 22
Number is EVENprachi@Prachi:~/LBHW$ ./program2_5exe
Enter number : 35
Number is ODDprachi@Prachi:~/LBHW$ ./program2_5exe
Enter number : -98
Number is EVENprachi@Prachi:~/LBHW$ ./program2_5exe
Enter number : -67
Number is ODD
*/
