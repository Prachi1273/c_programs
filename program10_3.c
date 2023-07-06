#include<stdio.h>

int KMToM(int iNo)
{
   iNo=iNo*1000;
   return iNo;
}

int main()
{
   int iValue1=0,iRet=0;
   
   printf("Enter distance in KM :");
   scanf("%d",&iValue1);
   
   iRet=KMToM(iValue1);
   
   printf("%d kM = %d M\n",iValue1,iRet);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program10_3exe
Enter distance in KM :5
5 kM = 5000 M
prachi@Prachi:~/LBHW$ ./program10_3exe
Enter distance in KM :12
12 kM = 12000 M


*/
