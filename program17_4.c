#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int *arr,int ivalue)
{
	int i =0,idgt=0;
	
	
	
	for(i=0;i<ivalue;i++)
	{
		idgt=arr[i]%10;
		printf("%d\t",idgt);
		idgt=arr[i]/10;
		printf("%d\t",idgt);
	}
}

int main()
{
   int iValue =0,i=0,iRet1=0,iRet2=0,diff;
   int* p = NULL;
   
   printf("Enter number of elements : \n");
   scanf("%d",&iValue);
   
   p = (int*)malloc(sizeof(int)*iValue);
   
   if(p==NULL)
   {
     printf("Unable to allocate memory.....");
     return -1;
   }
   
   printf("Enter %d elements \n",iValue);
   
   for(i=0;i<iValue;i++)
   {
      printf("Enter element %d : ",i+1);
      scanf("%d",&p[i]);
   }
   
   DisplayDigit(p,iValue);
   
   return 0;
}
/*
prachi@Prachi:~/LBHW$ ./program17_3exe
Enter number of elements : 
6
Enter 6 elements 
Enter element 1 : 98
Enter element 2 : 76
Enter element 3 : 54
Enter element 4 : 32
Enter element 5 : 10
Enter element 6 : 5
Minimum number is 5
Mximum number is 98
Diffrenece between largest and smallest number is 93

*/
