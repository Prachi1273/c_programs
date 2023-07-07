#include<stdio.h>
#include<math.h>

int main()
{
float celsius,fahr,kelvin;

printf("enter temperature in celcius: ");

scanf("%f",&celsius);

fahr = 1.8*celsius+32.0;

kelvin = 273.15+celsius;

printf("%0.2f celsius = %0.2f fahrenheit\n",celsius,fahr);

printf("%0.2f celsius = %0.2f kelvin\n",celsius,kelvin);

return (0);
 }
 
