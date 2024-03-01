#include <stdio.h>
#include <string.h>
 int main()
{
    int array[5] = {1, 3, 5, 7, 2};
    int leng = sizeof(array)/sizeof(array[0]);
    int greter = array[0];

    
    for ( int i = 1; i <leng; i++){
        if (array[i]> greter )
        {
            greter = array[i];
        }
    }
    printf(" gretar is %d\n", greter);
}