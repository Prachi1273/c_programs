#include<stdio.h>

extern int ino1;
extern int ino2;

int add(int ivalue1,int ivalue2)
{
   int ioutput = 0;
   ioutput = ivalue1 + ivalue2;
   return ioutput;
}
