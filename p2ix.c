//Program Title : Check Date is correct or NOT
//Program Code :
#include<stdio.h>
void datechk(int d,int m,int y)
{
	if((d<0 || d>=32) || (m<0 || m>12) || (y<0))
	{	
		printf("NOT a date \n");
	}
	else if((d<0 || d>=32) && (m<0 || m>12) && (y<0))
	{
		printf("NOT a date \n");
	}
	else if((m%2!=0 || m==8) && d>=32)
	{
		printf("NOT a date \n");
	}
	else if(m%2==0 && d>=31)
	{
		printf("NOT a date \n");
	}
	else if((y%4==0 || y%400==0) && m==2 && d>=30)
	{
		printf("Not a date\n");
	}
	else if((y%4!=0 || y%400!=0) && m==2 && d>=29)
	{
		printf("Not a date\n");
	}
	else
	{
		printf("Date is Correct\n");
	}
	
}
int main()
{
	int d = 0,m=0,y=0;
	printf("Enter date(dd/mm/yyyy) : ");
	scanf("%d%d%d",&d,&m,&y);
	datechk(d,m,y);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p2ix
Enter date(dd/mm/yyyy) : 34
5
2007
NOT a date 
prachi@Prachi:~/Desktop/mca$ ./p2ix
Enter date(dd/mm/yyyy) : 21
14
2004
NOT a date 
prachi@Prachi:~/Desktop/mca$ ./p2ix
Enter date(dd/mm/yyyy) : 16
3
-2006
NOT a date 
prachi@Prachi:~/Desktop/mca$ ./p2ix
Enter date(dd/mm/yyyy) : 29
2
2000
Date is Correct
prachi@Prachi:~/Desktop/mca$ ./p2ix
Enter date(dd/mm/yyyy) : 29
2
2003
Not a date
prachi@Prachi:~/Desktop/mca$ ./p2ix
Enter date(dd/mm/yyyy) : 31
1
2023
Date is Correct
prachi@Prachi:~/Desktop/mca$ ./p2ix
Enter date(dd/mm/yyyy) : 31
4
2006
NOT a date 
*/
