#include<stdio.h>
#include<stdbool.h>

 bool checkeven(int ino)
 {
     if((ino % 2) == 0)
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
     int ivalue = 0;
     bool bret = false;     //=false it internally considered as 0
     printf("Enter the no :\n");
     scanf("%d",&ivalue);
     
     bret = checkeven(ivalue);
     if(bret == true)
     {
        printf("It is even no\n");
     }
     else
     {
         printf("It is odd no\n");
     }
     
     return 0;
}
