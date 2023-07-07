#include<stdio.h>
int main()
{
int r,h;
float vol,sarea;
printf("\n enter value of radius :");
scanf("%d",&r);
printf("\n enter value of height  :");
scanf("%d",&h);
vol = 3.14*r*r*h;
sarea = (2*3.14*r*(r+h));
printf("the volume is  :%f\n",vol);
printf("the surface area is  :%f\n",sarea);
return 0;

} 
