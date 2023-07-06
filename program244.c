#include<stdio.h>

void DisplayR(int str[],int no)
{
    static int i=0;
    
    if(i<no)
    {
    	printf("%d\n",str[i]);
    	i++;
    	DisplayR(str, no);
    }
}

int main()
{
    int Arr[5]={10,20,30,40,50};

    DisplayR(Arr,5);

    return 0;
}
