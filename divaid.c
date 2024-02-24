#include <stdio.h>
int main()
{
    int a,b; 
    printf("Enter the numbar :");
    scanf("%d",&b); 
       
       for (a = 1; a <=10; a++){
        printf("%d/%d=%d\n",a,b,a/b);
       }
       
}