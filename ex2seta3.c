#include<stdio.h>
void main()                    
{
   int sec;
   float distance , initial_velocity,velocity, acceleration;
      printf("Enter the time in seconds \n");
      scanf("%d",&sec);
      printf("Enter the initial velocity \n");
      scanf("%f", &initial_velocity);
      printf("Enter the acceleration \n");
      scanf("%f", &acceleration);
      velocity = (initial_velocity + (acceleration * sec));
      distance = (initial_velocity + (acceleration * (sec*sec)));\
   printf("Total velocity is %f",velocity);
   printf("Total distance travelled is  %f", distance);

}
