#include <stdio.h>
int main()
{
    int end,fast = 1;
    printf("Enter numbr \n");
    scanf("%d",&end);
     
     while (fast<end)
     {
        printf("%d\n",fast);
        fast += 2;
     }
     
    
}