//Program Title : Input angles of Triangle and check whether Triangle is valid or not 
//Program Code :
#include<stdio.h>
#include<stdbool.h>
bool chktri(int a1,int a2,int a3)
{
	if((a1+a2+a3)==180)
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
	printf("Enter angles(3) of Triangle : ");
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
prachi@Prachi:~/Desktop/mca$ ./p2xv
Enter angles(3) of Triangle : 90
80
50
Triangle is not valid 
prachi@Prachi:~/Desktop/mca$ ./p2xv
Enter angles(3) of Triangle : 90
45
45
Triangle is valid
*/
