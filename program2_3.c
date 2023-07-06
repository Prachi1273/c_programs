#include<stdio.h>

void Display(int iNo)
{
  if(iNo<10)
  {
    printf("Hello");
  }
  else
  {
    printf("Demo");
  }
}

int main()
{
    int iValue =0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}

/*
   result : 
   
   *prachi@Prachi:~/LBHW$ ./program2_3exe
Enter number : 10
Demoprachi@Prachi:~/LBHW$ ./program2_3exe
Enter number : 5
Helloprachi@Prachi:~/LBHW$ ./program2_3exe
Enter number : -6
Hello
*/
