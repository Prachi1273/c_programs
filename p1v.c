//Program Title : Simple Interest
//Program Code :
#include<stdio.h>
float SI(int p,float roi,int y)
{
	float si = 0.0;
	si = (p*roi*y)/100;
	return si;
}
int main()
{
	int p = 0, y=0;
	float roi = 0.0,ans = 0.0;
	printf("Enter Principal amount : ");
	scanf("%d",&p);
	printf("Enter rate of interest : ");
	scanf("%f",&roi);
	printf("Enter time(in year) : ");
	scanf("%d",&y);
	ans = SI(p,roi,y);
	printf("Simple Interest is : %f\n",ans);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p1v
Enter Principal amount : 4500
Enter rate of interest : 2.3
Enter time(in year) : 2
Simple Interest is : 207.000000

*/
