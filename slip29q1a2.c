#include<stdio.h>

struct customer
{
   int no,phone;
   char name[20];
}e[100];

//To accept customer details
void accept(int n)
{
   printf("\nEnter customer no: ");
   scanf("%d",&e[n].no);
   printf("\nEnter customer name: ");
   scanf("%s",e[n].name);
   printf("\nEnter customer phone: ");
   scanf("%d",&e[10].phone);
}

//To display customer details
void display(int n)
{
   printf("\ncustomer no:\t\t%d",e[n].no);
   printf("\nName:\t\t\t%s",e[n].name);
   printf("\nphone:\t\t\t%d\n",e[n].phone);
}

void main()
{
   int c,n,i,phone; //c=choice , n=number of customers , phone=customer phone no 
   do
   {
      printf("\n1.Accept Details\n2.Display Details\n3.Exit\nEnter your               choice:");
      scanf("%d",&c);
      switch(c)
      {
      	case 1:printf("Enter the number of customers:");
                   scanf("%d",&n);
                   for(i=0;i<n;i++)
                   {
         		accept(i);
                   }
                    break;
         case 2:printf("\n===============Details of customers=====================\n");
         	    for(i=0;i<n;i++)
                   {
         			display(i);
                   }
                    break;
         case 3: printf("Enter the customer phone no: ");
         	     scanf("%d",&phone);
                     for(i=0;i<n;i++)
                      {
                      if(phone==e[n].phone)
                         {
                     	     display(i);
                             break;
                         }
                      }
       }
   }
   
  while(c<3);
 }
