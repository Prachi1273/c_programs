#include<stdio.h>

double FhToCs(float ftemp)
{
   double celsius;
   celsius=((ftemp-32)*(5/9));
   return celsius;
}

int main()
{
   float fValue;
   double dRet ;
   
   printf("Enter temperature in fahrenheit :");
   scanf("%f",&fValue);
   
   dRet=FhToCs(fValue);
   
   printf("%f Fahrenheit = %lf Celsius\n",fValue,dRet);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program10_3exe
Enter distance in KM :5
5 kM = 5000 M
prachi@Prachi:~/LBHW$ ./program10_3exe
Enter distance in KM :12
12 kM = 12000 M


*/
