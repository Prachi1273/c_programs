#include<stdio.h>

double RectArea(float fwidth,float fheight)
{
  double area =1.0;
  double pi=3.14;
  area = fwidth*fheight;
  return area;
}

int main()
{
   float fValue1=0.0,fValue2=0.0;
   double dRet = 0.0;
   
   printf("Enter width :");
   scanf("%f",&fValue1);
   
   printf("Enter height :");
   scanf("%f",&fValue2);
   
   dRet=RectArea(fValue1,fValue2);
   
   printf("Area of Rectangle is :%f\n",dRet);
      
   return 0;
}

/*
   result :
   
prachi@Prachi:~/LBHW$ ./program10_2exe
Enter width :5.3
Enter height :9.78
Area of Rectangle is :51.834000

*/
