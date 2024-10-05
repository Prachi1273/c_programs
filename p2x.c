//Program Title : Check voting eligibility
//Program Code :
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool chkvote(int age,char *contry)
{
	int ind = 0;
	ind=strcmp(contry,"India");
	if(age>=18 && ind==0 )
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
	int age = 0;
	char contry[10];
	bool chk = false;
	printf("Checking Voting Eligibility .....\n");
	printf("Enter Your age : ");
	scanf("%d",&age);
	printf("Enter contry you belongs to : ");
	scanf("%s",&contry);
	chk = chkvote(age,contry);
	if(chk== true)
	{
		printf("You are eligible for Voting\n");
	}
	else
	{
		printf("You are NOT eligible for Voting\n");
	}
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p2x
Checking Voting Eligibility .....
Enter Your age : 18
Enter contry you belongs to : japan
You are NOT eligible for Voting
prachi@Prachi:~/Desktop/mca$ ./p2x
Checking Voting Eligibility .....
Enter Your age : 23
Enter contry you belongs to : India
You are eligible for Voting
prachi@Prachi:~/Desktop/mca$ ./p2x
Checking Voting Eligibility .....
Enter Your age : 8
Enter contry you belongs to : India
You are NOT eligible for Voting
prachi@Prachi:~/Desktop/mca$ 

*/
