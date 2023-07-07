#include<stdio.h>

struct emp
{
   int id,salary;
   char name[20];
}e[100];

//To accept employee details
void accept(int n)
{
   printf("\nEnter employee id: ");
   scanf("%d",&e[n].id);
   printf("\nEnter employee name: ");
   scanf("%s",e[n].name);
   printf("\nEnter employee salary: ");
   scanf("%d",&e[n].salary);
}

//To display employee details
void display(int n)
{
   printf("\nemployee id:\t\t%d",e[n].id);
   printf("\nName:\t\t\t%s",e[n].name);
   printf("\nsalary:\t\t\t%d\n",e[n].salary);
}

void main()
{
   int c,n,i,Id; //c=choice , n=number of employees , Id=employee id
   do
   {
      printf("\n1.Accept Details\n2.Display Details\n3.Search Employee by Id \n4.Exit\nEnter your               choice:");
      scanf("%d",&c);
      switch(c)
      {
      	case 1:printf("Enter the number of employees:");
                   scanf("%d",&n);
                   for(i=0;i<n;i++)
                   {
         		accept(i);
                   }
                    break;
         case 2:printf("\n===============Details of employees=====================\n");
         	    for(i=0;i<n;i++)
                   {
         			display(i);
                   }
                    break;
         case 3: printf("Enter the employee Id: ");
         	     scanf("%d",&Id);
                     for(i=0;i<n;i++)
                    {
                  	if(Id==e[i].id)
                        {
                     	     display(i);
                             break;
                        }
                  }
      }
   }while(c<4);
}
/*
output:
1.Accept Details
2.Display Details
3.Search Employee by Id 
4.Exit
Enter your               choice:1
Enter the number of employees:3

Enter employee id: 55

Enter employee name: sarika

Enter employee salary: 26000

Enter employee id: 89

Enter employee name: dhanashree

Enter employee salary: 20000

Enter employee id: sujata

Enter employee name: 
Enter employee salary: 

5000

1.Accept Details
2.Display Details
3.Search Employee by Id 
4.Exit
Enter your               choice:2

===============Details of employees=====================

employee id:		55
Name:			sarika
salary:			26000

employee id:		89
Name:			dhanashree
salary:			20000

employee id:		0
Name:			sujata
salary:			5000

1.Accept Details
2.Display Details
3.Search Employee by Id 
4.Exit
Enter your               choice:3
Enter the employee Id: 0

employee id:		0
Name:			sujata
salary:			5000


*/
