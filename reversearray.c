// 11. Write a program to reverse an Array.
#include <stdio.h>
#include <stdio.h>
int main()
{
    int num[9] = {1,2,3,4,5,6,7,8,9};
    int bakearray[9];
    int index = 0;

    for (int i = 8; i >= 0; i--)
    {
        bakearray[index] = num[i];
        index++;

    }

   for (int i = 0; i < 9; i++)
        {
            printf("%d",bakearray[i]);
        }
    }
