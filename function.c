#include<stdio.h>

int addition(int ivalue1,int ivalue2) //dukan
{
  int ioutput=0;
  
  ioutput=ivalue1+ivalue2;
  
  return ioutput;
}

int main()     //ghar

{
  int ino1 = 10;
  
  int ino2 = 11;
  
  int ians = 0;
  
  ians = addition(ino1,ino2);
  
  printf("addition is : %d\n",ians);
  
  return 0;
}

/*

output : 
addition is : 21

*/
