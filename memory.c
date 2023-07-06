#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    
    int *arr = NULL;
    
    printf("Enter the size of array :");
    scanf("%d",&size);
    
    arr = (int *)malloc(sizeof(int)* size);
    
    free(arr); 
    
    return 0;
}
