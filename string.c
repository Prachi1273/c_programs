#include<stdio.h>
#include<string.h>

int main()
{
  char Arr[5] = {'a','b','c','d','\0'};
  char Brr[5]="abcd";
  char crr[]="abcd";
  
  printf("%s\n",Arr);
  printf("%s\n",Brr);
  printf("%s\n",crr);
  
  printf("size Arr %d\n",sizeof(Arr));
  printf("size brr %d\n",sizeof(Brr));
  printf("size crr %d\n",sizeof(crr));
    
     printf("length Arr %d\n",strlen(Arr));
      printf("length brr %d\n",strlen(Brr));
       printf("length crr %d\n",strlen(crr));

return 0;
}

