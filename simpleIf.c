#include <stdio.h>

int main(){


int year;
printf("Enter the Year\n");
scanf("%d",&year);

if(year % 4 == 0){
    printf("%d is a leap Year",year);
}


}