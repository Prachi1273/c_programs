#include<stdio.h>
#include<stdbool.h>

bool CheckNumber(int iValue)
{
   if(iValue>100)
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
  int iNo = 0;
  bool bRet=false;
  
  printf("Enter number :");
  scanf("%d",&iNo);
  
  bRet=CheckNumber(iNo);
  
  if(bRet==true)
  {
      printf("Greater\n");
  }
  else
  {
      printf("smaller\n");
  }
  
   return 0;
}

/*
   result :
   
   prachi@Prachi:~/LBHW$ ./program6_2exe
Enter number :101
Greater
prachi@Prachi:~/LBHW$ ./program6_2exe
Enter number :39
smaller

*/
