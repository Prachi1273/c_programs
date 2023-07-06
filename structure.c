#include<stdio.h>

//sturcture declaration 
struct demo
{
    int i;
    float f;
    int j;
    double d;
    

};

int main()
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;
    
    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;
    
    printf("the size of obj1 is : %d\n",sizeof(obj1));
    printf("the size of obj2 is : %d\n",sizeof(obj2));
    printf("i of obj2 is : %d\n",obj2.i);

    return 0;
}
