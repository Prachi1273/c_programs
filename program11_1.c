#include<stdio.h>

void DisplayRange(int iNo1,int iNo2)
{
   int i=0;
   if(iNo1>iNo2)
   {
     printf("Invalid range");
   }
   for(i=iNo1;i<=iNo2;i++)
   {
      printf("%d\n",i);
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

prachi@Prachi:~/LBHW$ ./program11_1exe
Enter starting value :23
Enter ending value :35
23
24
25
26
27
28
29
30
31
32
33
34
35
prachi@Prachi:~/LBHW$ ./program11_1exe
Enter starting value :10
Enter ending value :18
10
11
12
13
14
15
16
17
18
prachi@Prachi:~/LBHW$ ./program11_1exe
Enter starting value :10
Enter ending value :10
10
prachi@Prachi:~/LBHW$ ./program11_1exe
Enter starting value :-10
Enter ending value :2
-10
-9
-8
-7
-6
-5
-4
-3
-2
-1
0
1
2
prachi@Prachi:~/LBHW$ ./program11_1exe
Enter starting value :90
Enter ending value :18
Invalid range

*/
