//Program Title : Calculate Profit Loss
//Program Code :
#include<stdio.h>
void profitloss(int cp,int sp)
{
	int profit=0,loss=0;
	profit=sp-cp;
	loss=cp-sp;
	printf("Profit : %d\n",profit);
	printf("Loss : %d\n",loss);
}
int main()
{
	int cp=0,sp=0,a3=0;
	printf("Enter Cost Price : ");
	scanf("%d",&cp);
	printf("Enter Selling Price : ");
	scanf("%d",&sp);
	profitloss(cp,sp);
	return 0;
}
/*Output :
prachi@Prachi:~/Desktop/mca$ ./p2xvii
Enter angles(3) of Triangle : 45
45
90
Isosceles Triangle 
prachi@Prachi:~/Desktop/mca$ ./p2xvii
Enter angles(3) of Triangle : 23
98
47
Scalen Triangle
 prachi@Prachi:~/Desktop/mca$ ./p2xvii
Enter angles(3) of Triangle : 45
45
45
Equilateral Triangle
*/
