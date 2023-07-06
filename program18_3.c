#include<stdio.h>

void Pattern(int iNo)
{
   int i =0;
     
       for(i=1;i<=iNo;i++)
      {
         printf("%d\t*\t",i);
      }
      printf("\n");
}

int main()
{
   int iValue =0;
   printf("Enter number of element :");
   scanf("%d",&iValue);
   
   Pattern(iValue);
   
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program18_3exe
Enter number of element :5
1	*	2	*	3	*	4	*	5	*
*/
