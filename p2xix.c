//Program Title : Find all roots of quadratic equation
//Program Code :
#include<stdio.h>
#include<math.h>
void rootsqe(int a,int b,int c)
{
	int d=0;
	double s = 0.0,x1 = 0,x2 = 0;
	d=(b*b)-(4*a*c);
	s = sqrt(d);
	x1=(-b+s)/2*a;
	x2=(-b-s)/2*a;
	printf("Roots of quadratic eqation are : x=%f or x=%f\n",x1,x2);	
}
int main()
{
	int a=0,b=0,c=0;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	rootsqe(a,b,c);
	return 0;
}
/*Output :
prachi@Prachi:~/Desktop/mca$ ./p2xix
Enter value of a : 1
Enter value of b : -3
Enter value of c : -4
Roots of quadratic eqation are : x=4.000000 or x=-1.000000
prachi@Prachi:~/Desktop/mca$ ./p2xix
Enter value of a : 1
Enter value of b : -7
Enter value of c : 10
Roots of quadratic eqation are : x=5.000000 or x=2.000000
*/
