#include<stdio.h>

void Display(int iNo1)
{
  if(iNo1<0)
  {
    iNo1=-iNo1;
  }
  
  switch(iNo1)
     {
          case 0:
               printf("ZERO\n");
               break;
          case 1:
               printf("ONE\n");
               break;
          case 2:
               printf("TWO\n");
               break;
          case 3:
               printf("THREE\n");
               break;
          case 4:
               printf("FOUR\n");
               break;
          case 5:
               printf("FIVE\n");
               break;
          case 6:
               printf("SIX\n");
               break;
          case 7:
               printf("SEVEN\n");
               break;
          case 8:
               printf("EIGHT\n");
               break;
          case 9:
               printf("NINE\n");
               break;
          default:
               printf("Not a Single Digit Number\n");
     }
}

int main()
{
   int iValue1=0;
   
   printf("Enter number :");
   scanf("%d",&iValue1);
   
  Display(iValue1);
   
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program8_2exe
Enter number :9
NINE
prachi@Prachi:~/LBHW$ ./program8_2exe
Enter number :12
Not a Single Digit Number
prachi@Prachi:~/LBHW$ ./program8_2exe
Enter number :-3
THREE


*/
