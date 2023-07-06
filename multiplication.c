#include<stdio.h>

int multiplication(int ino1,int ino2)
{
    int ians = 0;
    
    ians = ino1 * ino2 ;
     
     return ians;
}
int main()
{
    int ino1=10;
    int ino2 = 11;
    int ans = 0;
    ans=multiplication(ino1,ino2);
    printf("the multiplication is :%d\n",ans);

    return 0;
}

/**/
