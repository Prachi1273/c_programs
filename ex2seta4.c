#include <stdio.h>
int main()
{
    float out_radius,in_radius,area, perimeter;
    printf("Enter inner radius of ring: ");
    scanf("%f",&in_radius);
    printf("Enter outer radius of ring: ");
    scanf("%f",&out_radius);
    perimeter= (2 * 3.14) * (in_radius + out_radius);
    area= 3.14 * ((in_radius * in_radius) + (out_radius * out_radius));
    printf("Area of circle: %f \nPerimeter of circle: %f\n",area,perimeter);
}
