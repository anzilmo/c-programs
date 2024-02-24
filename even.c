#include <stdio.h>

int main()
{
    int end, fast = 2;
    printf("Enter numbr : ");
    scanf("%d",&end);
     
     while (fast<end)
     {
        printf("%d\n",fast);
        fast += 2;
     } 
}