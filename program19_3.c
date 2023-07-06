#include<stdio.h>

void Pattern(int irow,int icol)
{
   int i =1,j=1;
   
   for(i=1;i<=irow;i++)
   {
      for(j=1;j<=icol;j++)
      {
        if(j%2 ==0)
        {
        printf("#\t");
        }
        else
        {
          printf("*\t");
        }
      }
      printf("\n");
   }
    
 
}

int main()
{
   int iValue1 =0,iValue2;
   printf("Enter number of rows and columns :");
   scanf("%d%d",&iValue1,&iValue2);
   
   Pattern(iValue1,iValue2);
   
   return 0;
}

/*
   result :
   prachi@Prachi:~/LBHW$ ./program19_3exe
Enter number of rows and columns :3
4
*	#	*	#	
*	#	*	#	
*	#	*	#
   
*/
