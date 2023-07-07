#include<stdio.h>
void main()
{
float length,width,height;
float SA,volume;
printf("\n please enter length,width and height of cuboid\n");
scanf("%f %f %f",&length,&width,&height);
SA=2*(length*width+length*height+width*height);
volume=length*width*height;
printf("\n the surface area of cuboid = %.2f\n",SA);
printf("\n the volume of cuboid = %.2f\n",volume);
}

