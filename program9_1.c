#include<stdio.h>

void Display(int iNo1)
{
  if(iNo1<0)
  {
     iNo1=-iNo1;
  }
  
  int i=0;
  
    for(i=1;i<=iNo1;i++)
    {
       printf("*\t");   
    }
    for(i=1;i<=iNo1;i++)
    {
       printf("#\t");   
    }
    
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
   Display(iValue1);
      
   return 0;
}

/*
   result :
   
Enter number :5
*	*	*	*	*	#	#	#	##	prachi@Prachi:~/LBHW$ ./program9_1exe
Enter number :-5
*	*	*	*	*	#	#	#	##	prachi@Prachi:~/LBHW$ gcc program9_1.c -o program9_1exe                   ./program9_1exe
Enter number :6
*	*	*	*	*	*	#	#	##	#	#	prachi@Prachi:~/LBHW$ ./program9_1exe
Enter number :2
*	*	#	#

*/
