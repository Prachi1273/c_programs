#include<stdio.h>

int X = 10; //global variable data

void demo()
{
  int B = 30;  // local variable stack
  
  printf("value of B from demo : %d\n",B);
  printf("value of X from demo : %d\n",X);
}

int main()
{
  int A = 20;  //local variable stack 
  
  printf("value of A from demo : %d\n",A);
  printf("value of X from demo : %d\n",X);
  
  demo();
  
  return 0;
} 

/*

output: 

value of A from demo : 20
value of X from demo : 10
value of B from demo : 30
value of X from demo : 10


*/
