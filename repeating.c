// Write a program to check the repeating elements in C.
#include <stdio.h>
#include <string.h>
int main()
{
    int array [8]= {1,1,2,3,4,5,6,2};
    int len = sizeof(array)/sizeof(array[0]);
     
     for (int  i = 0; i <len; i++)
     {
        for (int j =i + 1 ; j <len; j++)
        {
            if (array[i]==array[j])
            {
                printf(" The repeating Elements: %d\n",array[j]);
            }
            
        }
        
     }
     
}