#include<stdio.h>
#include<math.h>

int main()

{

float radius,height;

float surface_area,volume;

printf("enter value of radius and height of a cylinder : \n");

scanf("%f%f",&radius,&height);

surface_area = 2*(22/7)*radius*(radius+height);

volume = (22/7)*radius*radius*height;

printf("surface area of cylinder is :%.3f",surface_area);

printf("\n volume of cylinder is : %.3f\n",volume);

return 0;

}

