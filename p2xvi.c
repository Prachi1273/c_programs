//Program Title : Input sides of Triangle and check whether Triangle is valid or not 
//Program Code :
#include<stdio.h>
#include<stdbool.h>
bool chktri(int a1,int a2,int a3)
{
	int a4=0,a5=0,a6=0;
	a4=a1+a2;
	a5=a1+a3;
	a6=a3+a2;
	if((a4>a3) || (a5>a2) || (a6>a1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int a1=0,a2=0,a3=0;
	bool chk=false;
	printf("Enter sides(3) of Triangle : ");
	scanf("%d%d%d",&a1,&a2,&a3);
	chk=chktri(a1,a2,a3);
	if(chk==true)
	{
		printf("Triangle is valid \n");
	}
	else
	{
		printf("Triangle is not valid \n");
	}
	return 0;
}
/*Output :
prachi@Prachi:~/Desktop/mca$ ./p2xvi
Enter sides(3) of Triangle : 4
5
30
Triangle is valid 
*/
