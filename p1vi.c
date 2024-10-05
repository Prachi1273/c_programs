//Program Title : Gross Salary
//Program Code :
#include<stdio.h>
float GS(int bs)
{
	float gs = 1.0,da = 1.0, hra = 1.0;
	da = 5*bs/100;
	hra = 10*bs/100;
	gs = bs+da+hra;
	return gs;
}
int main()
{
	int bs = 0;
	float ans = 0.0;
	printf("Enter Basic Salary of Employee : ");
	scanf("%d",&bs);
	ans = GS(bs);
	printf("Gross Salary of Employee is : %f\n",ans);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p1vi
Enter Basic Salary of Employee : 10000
Gross Salary of Employee is : 11500.000000

*/
