#include<stdio.h>


int Multy(int iValue1,int iValue2,int iValue3)
{
  int Mult =1;
  
  if(iValue1==0 )
  {
     Mult =iValue2*iValue3;
  }
  else if(iValue2==0 )
  {
      Mult =iValue1*iValue3;
  }
  else if(iValue3 ==0)
  {
      Mult =iValue1*iValue2;
  }
  else
  {
     Mult =iValue1*iValue2*iValue3;
  }  
  
  return Mult;
}

int main()
{
  int iNo1 = 0,iNo2=0,iNo3=0;
  int iRet=0;
  
  printf("Enter 3 numbers :");
  scanf("%d%d%d",&iNo1,&iNo2,&iNo3);
  
  iRet=Multy(iNo1,iNo2,iNo3);
  
  printf("Multiplication is : %d\n",iRet);
  
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program6_4exe
Enter 3 numbers :5
0
0
Multiplication is : 0
prachi@Prachi:~/LBHW$ ./program6_4exe
Enter 3 numbers :5
0
7
Multiplication is : 35
prachi@Prachi:~/LBHW$ ./program6_4exe
Enter 3 numbers :6
5
2
Multiplication is : 60



*/
