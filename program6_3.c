#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iValue1,int iValue2)
{
   if(iValue1==iValue2)
   {
     return true;
   }
   else
   {
      return false;
   }

}

int main()
{
  int iNo1 = 0,iNo2;
  bool bRet=false;
  
  printf("Enter numbers :");
  scanf("%d%d",&iNo1,&iNo2);
  
  bRet=CheckNumber(iNo1,iNo2);
  
  if(bRet==true)
  {
      printf("Equal\n");
  }
  else
  {
      printf("Not equal\n");
  }
  
   return 0;
}

/*
   result :
   
 prachi@Prachi:~/LBHW$ gcc program6_3.c -o program6_3exe
prachi@Prachi:~/LBHW$ ./program6_3exe
Enter numbers :10
10
Equal
prachi@Prachi:~/LBHW$ ./program6_3exe
Enter numbers :10
12
Not equal
prachi@Prachi:~/LBHW$ ./program6_3exe
Enter numbers :10
-10
Not equal


*/
