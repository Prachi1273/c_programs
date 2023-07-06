#include<stdio.h>

void Display(int str[],int no)
{
    static int i=0;
    
    while(i<no)
    {
    	printf("%d\n",str[i]);
    	i++;
    }
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    Display(Arr,5);

    return 0;
}
