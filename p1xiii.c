//Program Title : GCD of 2 numbers
//Program Code :
#include<stdio.h>

int GCDno(int iNo1,int iNo2)
{
	int i=0,gcd = 0;
	
	for(i=1;i<=iNo1 && i<=iNo2;i++)
	{
		
		if(iNo1%i==0 && iNo2%i == 0)
		{
			gcd = i;
			
		}
		
	}
	return gcd;
}
int main()
{
	int iNo1 = 0,iNo2 = 0,iAns = 0;
	printf("Enter 2 numbers : ");
	scanf("%d %d",&iNo1, &iNo2);
	
	iAns = GCDno(iNo1,iNo2);
	printf("GCD of 2 number : %d\n",iAns);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p1xiii
Enter 2 numbers : 8
12
GCD of 2 number : 4
prachi@Prachi:~/Desktop/mca$ ./p1xiii
Enter 2 numbers : 18
27
GCD of 2 number : 9
prachi@Prachi:~/Desktop/mca$ ./p1xiii
Enter 2 numbers : 60
75
GCD of 2 number : 15

*/
