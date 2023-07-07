#include<stdio.h>
void main()
{
   int a,b;
   float Arithmetic_Mean ,Harmonic_Mean;
   
  
   printf("Enter the 1st number: ");
   scanf("%d",&a);
   printf("Enter the 2nd number: ");
   scanf("%d",&b);
  
   Arithmetic_Mean=(a+b)/2;
   Harmonic_Mean=a*b/(a+b); 
   
   printf("Arithmetic Mean is: %f",Arithmetic_Mean);
   printf("\nHarmonic Mean is: %f",Harmonic_Mean);
   
}
