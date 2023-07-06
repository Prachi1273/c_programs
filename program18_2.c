#include<stdio.h>

void Pattern(int iNo)
{
   int i =0;
  
   
       for(i=iNo;i>=1;i--)
      {
         printf("%d\t#\t",i);
      }
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
   
   prachi@Prachi:~/LBHW$ ./program18_2exe
Enter number of element :5
5	#	4	#	3	#	2	#	1	#
*/
