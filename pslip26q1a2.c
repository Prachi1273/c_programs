#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int a[N], i, *ptr;  
  
    printf("Enter %d integer numbers\n", N);  
    
    for(i = 0; i < N; i++)  
    
        scanf("%d", &a[i]);  
  
    ptr = &a[N - 1];  
  
    printf("\nElements of array in reverse order ...\n");  
    
    for(i = 0; i < N; i++)  
    
        printf("%d\n", *ptr--);  
  
    return 0;  
} 
/*
output :
Enter 5 integer numbers
2
3
4
5
6

Elements of array in reverse order ...
6
5
4
3
2

*/
