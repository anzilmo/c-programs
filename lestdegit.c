
#include <stdio.h>

int main(){

    int num,lastDigit; 
    printf("Entar the Numabr :");
    scanf("%d",&num);
    
    
    int firstDigit = num;   
    while(firstDigit >= 10){
        firstDigit = firstDigit / 10;
    }

    
    lastDigit = num % 10;

    printf( "First Digit : %d\n",firstDigit);
    printf("Last Digit  : %d\n",lastDigit);

    return 0;
}