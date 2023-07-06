#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  while(iCnt<iNo)
  {
     printf("*");
      iCnt++;
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
   
   prachi@Prachi:~/LBHW$ ./program2_2exe
Enter number : 4
****prachi@Prachi:~/LBHW$ ./program2_2exe
Enter number : 11
***********prachi@Prachi:~/LBHW$ ./program2_2exe
Enter number : 1
*
*/
