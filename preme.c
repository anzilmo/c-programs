#include <stdio.h>
int main()
{
    int check,find=1;
     
     printf("Enter the numbar");
     scanf("%d",&check);
      
      for (int i = 2; i < check; i++)
      {
        if(check % i ==0){
            find = 0;
            break;
        }
      } 
      if (find == 0){

        printf(" is a  prime numbar");

      }else{
        printf(" is a not prim numbar");
      }
      
}