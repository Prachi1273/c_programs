#include<stdio.h>

int main()
{
  int ino1 = 10;
  
  float fvalue = 3.14;
  
  double dData = 6.10;
  
  char cvalue = 'P';
  
  printf("Integer is %d\n",ino1);
  
  printf("float is %f\n",fvalue);
  
  printf("double is %lf\n",dData);
  
  printf("character is %c\n",cvalue);

   return 0;
}

/*

output : 

prachi@Prachi:~/PPA$ gcc Datatypes.c -o datatype
prachi@Prachi:~/PPA$ ./datatype
Integer is 10
float is 3.140000
double is 6.100000
character is P

*/
