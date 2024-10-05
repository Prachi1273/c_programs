//Program Title : Input week number and print weekday
//Program Code :
#include<stdio.h>
#include<stdbool.h>
void weekday(int iNo1)
{
	if(iNo1==0 || iNo1>8 || iNo1<0)
	{
		printf("Invalid number\n");
	}
	else if(iNo1==1)
	{
		printf("Monday\n");
	}
	else if(iNo1==2) 
	{
		printf("Tuesday\n");
	}
	else if(iNo1==3) 
	{
		printf("Wednesday\n");
	}
	else if(iNo1==4) 
	{
		printf("Thursday\n");
	}
	else if(iNo1==5) 
	{
		printf("Friday\n");
	}
	else if(iNo1==6) 
	{
		printf("Saturday\n");
	}
	else if(iNo1==7) 
	{
		printf("Sunday\n");
	}
	
}
int main()
{
	int iNo1 = 0;
	printf("Enter Number : ");
	scanf("%d",&iNo1);
	weekday(iNo1);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p2xii
Enter Number : 9
Invalid number
prachi@Prachi:~/Desktop/mca$ ./p2xii
Enter Number : 0
Invalid number
prachi@Prachi:~/Desktop/mca$ ./p2xii
Enter Number : -5
Invalid number
prachi@Prachi:~/Desktop/mca$ ./p2xii
Enter Number : 4
Thursday
prachi@Prachi:~/Desktop/mca$ ./p2xii
Enter Number : 2
Tuesday
*/
