//Program Title : Percentage of 5 subject
//Program Code :
#include<stdio.h>
float PercentageS(int marks[5],int outof[5])
{
	int sum1 = 0,sum2 = 0,i=0;
	float per = 0.0;
	for(i=0;i<5;i++)
	{
		sum1 = sum1+marks[i];
		sum2 = sum2+outof[i];
	}
	printf("Toatl Marks are %d",sum1);
	printf(" out of %d\n ",sum2);
	per = sum1*100/sum2;
	return per;
}
int main()
{
	int marks[5], outof[5], i=0;
	float ans = 0.0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Marks of subject %d : ",i+1);
		scanf("%d",&marks[i]);
		printf("out of : ");
		scanf("%d",&outof[i]);
	}
	
	ans = PercentageS(marks,outof);
	printf("Percentage of 5 subjects are : %f\n",ans);
	return 0;
}
/*Output:
prachi@Prachi:~/Desktop/mca$ ./p1vii
Enter Marks of subject 1 : 34
out of : 50
Enter Marks of subject 2 : 46
out of : 50
Enter Marks of subject 3 : 27
out of : 50
Enter Marks of subject 4 : 39
out of : 50
Enter Marks of subject 5 : 42
out of : 50
Toatl Marks are 188 out of 250
 Percentage of 5 subjects are : 75.000000


*/
