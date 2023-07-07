#include <stdio.h>
void main()
{
    int x = 1;
    int y = 0;
    int total = 0;
    while (x > y)
  {
        printf("The second number should be greater than the first one.\n");
        printf("Type the first number : \n");
        scanf("%d", &x);
        printf("Type the second number : \n");
        scanf("%d", &y);
    }
    while (x<=y)
  {
        total += x;
        x++;
    }
    printf("The sum of all integer between x and y :  %d\n",total);
}
