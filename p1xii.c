//Program Title : LCMof 2 numbers
//Program Code :
#include<stdio.h>

int LCMno(int iNo1,int iNo2)
{
	int i=0,gcd = 0,lcm = 0;
	for(i=1;i<=iNo1 && i<=iNo2;i++)
	{
		if(iNo1%i==0 && iNo2%i == 0)
		{
			gcd = i;
			
		}
	}
	lcm=(iNo1*iNo2)/gcd;
	return lcm;
}
int main()
{
	int iNo1 = 0,iNo2 = 0,iAns = 0;
	printf("Enter 2 numbers : ");
	scanf("%d %d",&iNo1, &iNo2);
	
	iAns = LCMno(iNo1,iNo2);
	printf("LCM of 2 number : %d\n",iAns);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p1xii
Enter 2 numbers : 4
10
LCM of 2 number : 20
prachi@Prachi:~/Desktop/mca$ ./p1xii
Enter 2 numbers : 24
15
LCM of 2 number : 120
*/
