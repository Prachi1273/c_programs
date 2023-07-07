#include<stdio.h>
int main()
{
 int a,b,c,d,ch,nu,de;
 printf("enter 1 st fraction \nnumerator:");
 scanf("%d",&a);
 printf("denominator:");
 scanf("%d",&b);
    printf("enter 2 st fraction \nnumerator:");
 scanf("%d",&c);
 printf("denominator:");
 scanf("%d",&d);
 printf("1.add\n2.sub\n3.mul :");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:nu=(a*d)+(c*b);
    de=(b*d);
    printf("add is %d/%d",nu,de);
    break;
 case 2:nu=(a*d)-(c*b);
    de=(b*d);
    printf("sub is %d/%d",nu,de);
    break;
 case 3:nu=(a*c);
    de=(b*d);
    printf("mul is %d/%d",nu,de);
    break;
    }
}
