#include<stdio.h>

int CountDigitEven(int iNo)
{
  int iDigit = 0,isumEven = 0;
  
  while(iNo != 0)
  {
      if(iNo<0)
      {
        iNo = -iNo;
      }
      iDigit = iNo % 10; 
      if(iDigit%2 ==0)
      {
         isumEven = isumEven+iDigit;
      }     
      iNo = iNo /10;       
  }    
  return isumEven;  
}
int CountDigitOdd(int iNo)
{
  int iDigit = 0,isumOdd = 0;
  
  while(iNo != 0)
  {
      if(iNo<0)
      {
        iNo = -iNo;
      }
      iDigit = iNo % 10; 
  if(iDigit%2 !=0)
      {
         isumOdd = isumOdd+iDigit;
      } 
      iNo = iNo /10;      
  }    
  return isumOdd;  
}

int main()
{
   int iValue =0,iRet1 =0,iRet2=0,diff=0;
   
   printf("Enter number :\n");
   scanf("%d",&iValue);
   
   iRet1 = CountDigitEven(iValue);
   iRet2 = CountDigitOdd(iValue);
   
   printf("Summation of even digits are : %d\n",iRet1);
   printf("Summation of odd digits are : %d\n",iRet2);
   
   diff = iRet1 - iRet2;
   
   printf("Diffrence between summation of even digits and summation of odd digits are : %d\n",diff);
   
   return 0;
}

/*
result :
prachi@Prachi:~/LBHW$ ./program13_5exe
Enter number :
2395
Summation of even digits are : 2
Summation of odd digits are : 17
Diffrence between summation of even digits and summation of odd digits are : -15
prachi@Prachi:~/LBHW$ ./program13_5exe
Enter number :
1018
Summation of even digits are : 8
Summation of odd digits are : 2
Diffrence between summation of even digits and summation of odd digits are : 6
prachi@Prachi:~/LBHW$ ./program13_5exe
Enter number :
8440
Summation of even digits are : 16
Summation of odd digits are : 0
Diffrence between summation of even digits and summation of odd digits are : 16
*/
