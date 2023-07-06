#include<stdio.h>

int DisplayR(int str[],int no)
{
    static int i=0;
    static int isum=0;
    
    if(i<no)
    {
    	isum=isum+str[i];
    	i++;
    	DisplayR(str, no);
    }
    return isum;
}

int main()
{
    int Arr[5]={10,20,30,40,50};
    int iret=0;

    iret=DisplayR(Arr,5);
    
    printf("Addition is %d\n",iret);

    return 0;
}
