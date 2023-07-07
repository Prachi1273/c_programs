#include<stdio.h>
//To calculate area of square
	void square()
   {
   	float length,Area_of_square;
      printf("\nEnter length: ");
      scanf("%f",&length);

      Area_of_square=(length*length);
      printf("\nArea of square: %f",Area_of_square);
   }

   //To calculate Area of Rectangle
   void rectangle()
   {
   	float length,breadth,Area_of_Rectangle;
      printf("\nEnter length of rectangle: ");
      scanf("%f",&length);
      printf("\nEnter breadth: ");
      scanf("%f",&breadth);
      Area_of_Rectangle=length*breadth;
      printf("\nArea of Rectangle: %f",Area_of_Rectangle);
   }

   //To calculate Area of triangle
   void triangle()
   {
      float height,base,Area_of_triangle;
      printf("\nEnter height: ");
      scanf("%f",&height);
      printf("\nEnter base: ");
      scanf("%f",&base);
     	Area_of_triangle=(height*base)/2;
      printf("\nArea of triangle: %f",Area_of_triangle);
   }

void main()
{
   int ch; //ch=choice
	do
   {
   	//To display menu
    	printf("\n1) Area of Square\n2) Area of Rectangle\n3) Area of triangle\n4) Exit.\nEnter choice : ");
    	scanf("%d",&ch);
      switch(ch)
      {
      	case 1:square();break;
         case 2:rectangle();break;
         case 3:triangle();break;
      }
   }while(ch!=4);
}
