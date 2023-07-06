#include<stdio.h>

void DisplayRange(int iNo1,int iNo2)
{
   int i=0;
   if(iNo1>iNo2)
   {
     printf("Invalid range");
   }
   for(i=iNo2;i>=iNo1;i--)
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

prachi@Prachi:~/LBHW$ ./program11_5exe
Enter starting value :23
Enter ending value :35
35
34
33
32
31
30
29
28
27
26
25
24
23
prachi@Prachi:~/LBHW$ ./program11_5exe
Enter starting value :10
Enter ending value :18
18
17
16
15
14
13
12
11
10
prachi@Prachi:~/LBHW$ ./program11_5exe
Enter starting value :2
Enter ending value :-10
Invalid rangeprachi@Prachi:~/LBHW$ ./program11_5exe
Enter starting value :-10
Enter ending value :2
2
1
0
-1
-2
-3
-4
-5
-6
-7
-8
-9
-10
prachi@Prachi:~/LBHW$ ./program11_5exe
Enter starting value :90
Enter ending value :18
Invalid range

*/
