#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  for(iCnt = 0; iCnt<iNo; iCnt++)
  {
     printf("*");
  }
}

int main()
{
    int iValue =0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}

/*
   result : 
   
   prachi@Prachi:~/LBHW$ ./program2_1exe
Enter number : 5
*****prachi@Prachi:~/LBHW$ ./program2_1exe
Enter number : 1
*prachi@Prachi:~/LBHW$ ./program2_1exe
Enter number : 0

*/
