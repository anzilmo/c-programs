#include <stdio.h>
#include<string.h>
int main(){
    int  i,n;
    int a =0, b= 1, c= 0;
    printf("Enter numbar then will be checke fibonaeci seris");
    scanf("%d",&n);  
    
     
     for ( i = 1; i<=n; i++)
     {
        printf("%d.",c);
         
         a = b;
         b = c;
         c = a+ b;


     } 
     printf("\n");
     

}