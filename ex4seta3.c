#include<stdio.h>
void main()
{
    int x,y,i,quo,rem,n,k;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("\n1: Equality\n");
    printf("2: to check x is less than y or not\n");
    printf("3: to divide x by y & to display quotient & remainder\n");
    printf("4: to check Range\n");
    printf("5: Swap\n");
    printf("Choose any option:\n");
    scanf("%d",&i);
    switch(i)
    {
         case 1:
             if(x==y)
                 printf("x is equal to y");
             else
                 printf("x is not equal to y");
             break;
         case 2:
             if(x<y)
                 printf("x is less than y");
             else
                 printf("x is not less than y");
             break;
         case 3:
             quo=x/y;
             rem=x%y;
             printf(" Quotiont of %d & %d is: %d\n Remainder of %d & %d is: %d ",x,y,quo,x,y,rem);
             break;
         case 4:
             printf("Enter a number:\n");
             scanf("%d",&n);
             if(n>=x && n<=y)
                 printf("%d lies in between %d & %d",n,x,y);
             else
                 printf("%d is not lies between %d & %d",n,x,y);
             break;
         case 5:
             printf("before swap x=%d & y=%d\n",x,y);
             k=x;
             x=y;
             y=k;
             printf("After swap x=%d & y=%d",x,y);
             break;
         default:
             printf("Please choose correct option");
         }
}
