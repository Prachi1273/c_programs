#include<stdio.h>

enum days{monday,tuesday,wednesday,thursday};

int main()
{
   enum days obj;
   int salary[] = {200,450,250,750};
   
   printf("size of enum : %d\n",sizeof(obj));
   printf("monday : %d\n",monday);
   printf("tuesday: %d\n",tuesday);
   printf("wednesday : %d\n",wednesday);
   printf("thursday: %d\n",thursday);
   
   printf("my salary on wednesday is ; %d\n",salary[2]);
   printf("my salary on wednesday is ; %d\n",salary[wednesday]);
   
   return 0;
}
