//Program Title : Count total number of notes in given amount 
//Program Code :
#include<stdio.h>
#include<stdbool.h>
void countnote(int iNo1)
{
	int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0,n200=0,n500=0;
	if(iNo1==0 || iNo1<0)
	{
		printf("Invalid number\n");
	}
	else 
	{
		if(iNo1>=1)
		{
			n1 = iNo1/1;
			printf("Coins of Rs. 1 are : %d\n",n1);
		}
		if(iNo1>=2)
		{
			n2 = iNo1/2;
			printf("Coins of Rs. 2 are : %d\n",n2);
		}
		if(iNo1>=5)
		{
			n5 = iNo1/5;
			printf("Coins of Rs. 5 are : %d\n",n5);
		}
		if(iNo1>=10)
		{
			n10 = iNo1/10;
			printf("Notes of Rs. 10 are : %d\n",n10);
		}
		if(iNo1>=20)
		{
			n20 = iNo1/20;
			printf("Notes of Rs. 20 are : %d\n",n20);
		}
		if(iNo1>=50)
		{
			n50 = iNo1/50;
			printf("Notes of Rs. 50 are : %d\n",n50);
		}
		if(iNo1>=100)
		{
			n100 = iNo1/100;
			printf("Notes of Rs. 100 are : %d\n",n100);
		}
		if(iNo1>=200)
		{
			n200 = iNo1/200;
			printf("Notes of Rs. 200 are : %d\n",n200);
		}
		if(iNo1>=500)
		{
			n500 = iNo1/500;
			printf("Notes of Rs. 500 are : %d\n",n500);
		}	
	}
}
int main()
{
	int iNo1 = 0;
	printf("Enter Amount : ");
	scanf("%d",&iNo1);
	countnote(iNo1);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p2xiv
Enter Amount : 0
Invalid number
prachi@Prachi:~/Desktop/mca$ ./p2xiv
Enter Amount : -879
Invalid number
prachi@Prachi:~/Desktop/mca$ ./p2xiv
Enter Amount : 1500
Coins of Rs. 1 are : 1500
Coins of Rs. 2 are : 750
Coins of Rs. 5 are : 300
Notes of Rs. 10 are : 150
Notes of Rs. 20 are : 75
Notes of Rs. 50 are : 30
Notes of Rs. 100 are : 15
Notes of Rs. 200 are : 7
Notes of Rs. 500 are : 3
*/
