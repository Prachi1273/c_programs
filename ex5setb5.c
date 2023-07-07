#include<stdio.h>
void main()
{
 int num,n=1,x,m=0,p;
 printf("Enter the number : \n");
 scanf("%d",&num);
 p=num;
 while(p!=0)
 {
  p=p/10;
  n=n*10;
    }
 while(num!=0)
 { 
     n=n/10;
  x=num%10;
  num=num/10;
  m=m+(x*n); 
 } 
  while(m!=0)
 { 
  x=m%10;
  m=m/10;
    switch(x)
   {
case 0:
      printf("Zero");
      break;
case 1:
      printf("One");
      break;
case 2:
      printf("Two");
      break;
case 3:
      printf("Three");
      break;
case 4:
      printf("Four");
      break;
case 5:
      printf("Five");
case 6:
      printf("Six");
      break;
case 7:
      printf("Seven");
      break;
case 8:
      printf("Eight");
      break;
case 9:
      printf("Nine");
      break;
     }
 }
}
