#include<stdio.h>

void Pattern(int iNo1)
{
  int i=0;
  
  if(iNo1<0)
  {
     iNo1=-iNo1;
  }
  
  for(i=0;i<iNo1;i++)
  {
    printf("$\t*\t");
  }
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
   Pattern(iValue1);
   
   return 0;
}

/*
   result :
   
   prachi@Prachi:~/LBHW$ ./program7_1exe
Enter number :5
$	*	$	*	$	*	$	*	$*	prachi@Prachi:~/LBHW$ ./program7_1exe
Enter number :3
$	*	$	*	$	*	prachi@Prachi:~/LBHW$ ./program7_1exe
Enter number :-4
$	*	$	*	$	*	$	*	prachi@Prachi:~/LBHW$ 

*/
