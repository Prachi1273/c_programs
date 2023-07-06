#include<stdio.h>
#include<stdlib.h>

void DivisibleByFive(int* arr,int isize)
{
   int icnt =0;
   for(icnt=0;icnt<isize;icnt++)
   {
      if(arr[icnt]%5==0)
      {
        printf("%d\t",arr[icnt]);
      }
   }
   printf("\n");
}

int main()
{
  int ivalue=0,i=0;
  int *p = NULL;
  
  printf("Enter number of elements :");
  scanf("%d",&ivalue);
  
  p=(int *)malloc(sizeof(int)*ivalue);
  
  if(p==NULL)
  {
    printf("Unable to allocate memory....");
    return -1;
  }
  
  for(i=0;i<ivalue;i++)
  {
    printf("Element %d is : ",i+1);
    scanf("%d",&p[i]);
  }
  
  DivisibleByFive(p,ivalue);
  
  free(p);
  
  return 0;
}

/*
prachi@Prachi:~/LBHW$ ./program14_2exe
Enter number of elements :4
Element 1 is : 2
Element 2 is : 6
Element 3 is : 50
Element 4 is : 45
50	45
*/
