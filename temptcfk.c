#include<stdio.h>
int main()
{
float kelvin,celcius,far;
printf("\n enter temperature in celcius:");
scanf("%f,%f,%f",&kelvin,&celcius,&far);
 kelvin = celcius + 273.15;
 far = ((1.8*celcius)+32.0);
 printf("%0.2f\n temp in kelvin %0.2f\n",kelvin);
 printf("%0.2f\n temp in fahrenheit %0.2f\n",far);
 return 0;
 
}
