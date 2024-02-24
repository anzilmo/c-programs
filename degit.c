#include <stdio.h>
int main()
{
    int num ,count=0;
     
    printf("Enter a Numbar :");
     scanf("%d",&num); 
      
      while(num > 1) 
      {
        num = num / 10;
        count++;
      } 
      printf("is degits Numbars:%d",count);
      
}
