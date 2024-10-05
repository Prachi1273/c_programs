//Program Title : convert persons name into abbrivated
//Program Code :
#include<stdio.h>
void NameAbbrivation(char firstn[], char midn[], char lastn[])
{
	printf("Abbrivated name is : ");
	printf("%c. %c. %s\n",firstn[0],midn[0],lastn);
}
int main()
{
	char firstn[15],midn[15],lastn[15];
	printf("Enter First name : ");
	scanf("%s",&firstn);
	printf("Enter middle name : ");
	scanf("%s",&midn);
	printf("Enter last name : ");
	scanf("%s",&lastn);
	NameAbbrivation(firstn,midn,lastn);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ gcc p1iv.c -o p1iv -w
prachi@Prachi:~/Desktop/mca$ ./p1iv
Enter First name : Prachi
Enter middle name : Anand
Enter last name : Barve
Abbrivated name is : P. A. Barve
*/
