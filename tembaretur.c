#include <stdio.h>
int main()
{
    int celsius, fahrenheit;
    
    printf("Enter tembaretur : ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9/5) + 32 ;
    printf("Celsius is \t\t:%d\n", celsius);
    printf("Fahrenheit is \t\t:%d", fahrenheit);

    return 0;
}