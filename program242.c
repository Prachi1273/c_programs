#include<stdio.h>

void Display(int str[],int no)
{
    int i=0;
    
    for(i=0;i<no;i++)
    {
    	printf("%d\n",str[i]);
    }
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    Display(Arr,5);

    return 0;
}
