//Program Title : check whether Triangle is equlateral isosceles or scalen 
//Program Code :
#include<stdio.h>
void chktri(int a1,int a2,int a3)
{
	if(a1==a2 && a2==a3)
	{
		printf("Equilateral Triangle\n ");
	}
	else if(a1==a2 || a1==a3 || a2==a3)
	{
		printf("Isosceles Triangle \n");
	}
	else
	{
		printf("Scalen Triangle\n ");
	}
}
int main()
{
	int a1=0,a2=0,a3=0;
	printf("Enter angles(3) of Triangle : ");
	scanf("%d%d%d",&a1,&a2,&a3);
	chktri(a1,a2,a3);
	return 0;
}
/*Output :
prachi@Prachi:~/Desktop/mca$ ./p2xvii
Enter angles(3) of Triangle : 45
45
90
Isosceles Triangle 
prachi@Prachi:~/Desktop/mca$ ./p2xvii
Enter angles(3) of Triangle : 23
98
47
Scalen Triangle
 prachi@Prachi:~/Desktop/mca$ ./p2xvii
Enter angles(3) of Triangle : 45
45
45
Equilateral Triangle
*/
