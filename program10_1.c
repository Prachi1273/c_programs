#include<stdio.h>

double CircleArea(float fradius)
{
  double area =1.0;
  double pi=3.14;
  area = pi*fradius*fradius;
  return area;
}

int main()
{
   float fValue1=0.0;
   double dRet = 0.0;
   
   printf("Enter radius :");
   scanf("%f",&fValue1);
   
   dRet=CircleArea(fValue1);
   
   printf("Area of circle is :%f\n",dRet);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program10_1exe
Enter radius :5.3
Area of circle is :88.202606
prachi@Prachi:~/LBHW$ ./program10_1exe
Enter radius :10.4
Area of circle is :339.622375


*/
