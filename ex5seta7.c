#include <stdio.h>
int display(char);
int main()
{
 char ch,c;
 printf("Enter character:");
 scanf("%c", &ch);
 display(ch);
}
int display(char ch)
{
 int n,i;
 printf("how many next char:");
 scanf("%d",&n);
 printf("\nYou entered:\t%c\n", ch);
 printf("Next character :");
 for(i=0;i<n;i++)
 {
  ch=ch+1;
    printf("\t%c", ch);
 }
 return 0;
}
