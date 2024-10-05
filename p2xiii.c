//Program Title : Input week number and print weekday
//Program Code :
#include<stdio.h>
#include<stdbool.h>
void monthno(int iNo1)
{
	int y=0;
	if(iNo1==0 || iNo1>8 || iNo1<0)
	{
		printf("Invalid number\n");
	}
	else if(iNo1%2==0)
	{
		if(iNo1==2)
		{
			printf("Enter year : ");
			scanf("%d",&y);
			if(y%4==0 || y%400==0)
			{
				printf("29 Days\n");
			}
			else
			{
				printf("28 Days\n");
			}
		}
		else if(iNo1==8)
		{
			printf("31 Days\n");
		}
		else
		{
			printf("30 Days\n");
		}
	}
	else if(iNo1%2!=0) 
	{
		printf("31 Days\n");
	}
}
int main()
{
	int iNo1 = 0;
	printf("Enter Month Number : ");
	scanf("%d",&iNo1);
	monthno(iNo1);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p2xiii
Enter Month Number : 2
Enter year : 2004
29 Days
prachi@Prachi:~/Desktop/mca$ ./p2xiii
Enter Month Number : 2
Enter year : 2007
28 Days
prachi@Prachi:~/Desktop/mca$ ./p2xiii
Enter Month Number : 8
31 Days
prachi@Prachi:~/Desktop/mca$ ./p2xiii
Enter Month Number : 3
31 Days
prachi@Prachi:~/Desktop/mca$ ./p2xiii
Enter Month Number : 6
30 Days
*/
