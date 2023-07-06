#include<stdio.h>

void DisplayTime(char ch)
{ 
   if(ch=='a' || ch=='A')
   {
      printf("Your exam time is 7:00 AM\n");
   }
   if(ch=='b' || ch=='B')
   {
      printf("Your exam time is 8:30 AM\n");
   }
   if(ch=='c' || ch=='C')
   {
      printf("Your exam time is 9:20 AM\n");
   }
   if(ch=='d' || ch=='D')
   {
      printf("Your exam time is 10:30 AM\n");
   }
}

int main()
{
   char cValue =0;
    
   printf("Enter Division :");
   scanf("%c",&cValue);
   
   DisplayTime(cValue);

   
   return 0;
}

/*
  result :
  
Enter Division :a
Your exam time is 7:00 AM
prachi@Prachi:~/LBHW$ ./program23_5exe
Enter Division :B
Your exam time is 8:30 AM
prachi@Prachi:~/LBHW$ ./program23_5exe
Enter Division :c
Your exam time is 9:20 AM
prachi@Prachi:~/LBHW$ ./program23_5exe
Enter Division :D
Your exam time is 10:30 AM

*/
