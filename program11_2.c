#include<stdio.h>

void DisplayRange(int iNo1,int iNo2)
{
   int i=0;
   if(iNo1>iNo2)
   {
     printf("Invalid range\n");
   }
   for(i=iNo1;i<=iNo2;i++)
   {
      if((i%2)==0)
      {   
        printf("%d\n",i);
      }
   }
}

int main()
{
   int iValue1=0;
   int iValue2=0;
   
   printf("Enter starting value :");
   scanf("%d",&iValue1);
   
   printf("Enter ending value :");
   scanf("%d",&iValue2);
   
   DisplayRange(iValue1,iValue2);
   
   return 0;
}

/*
result :

prachi@Prachi:~/LBHW$ ./program11_2exe
Enter starting value :23
Enter ending value :35
24
26
28
30
32
34
prachi@Prachi:~/LBHW$ ./program11_2exe
Enter starting value :10
Enter ending value :18
10
12
14
16
18
prachi@Prachi:~/LBHW$ ./program11_2exe
Enter starting value :10
Enter ending value :10
10
prachi@Prachi:~/LBHW$ ./program11_2exe
Enter starting value :-10
Enter ending value :2
-10
-8
-6
-4
-2
0
2
prachi@Prachi:~/LBHW$ ./program11_2exe
Enter starting value :90
Enter ending value :18
Invalid range

*/
