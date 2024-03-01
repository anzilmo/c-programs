#include <stdio.h>
#include <string.h>

int main()

{
    int num, num2 = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num == 0)
        num2 = 1;
    while (num > 0){
        int rem = num % 10;
        if (rem == 0)
            rem = 1;
        num = num / 10;
        num2 = num2 * 10 + rem;
    }
    num = 0;
    while (num2 > 0)
    {
        int r = num2 % 10;
        num = num * 10 + r;
        num2 /= 10;
    }
    printf("Converted number is: %d", num);
    return 0;
}























































// int main()
// {
//     int num1,num2=0;
//     printf("Enter the nubar:");
//     scanf("%d",&num1);

//      if (num1==0)

//        { num2 + 1;}

//      while (num1>0)
//      {
//         int rem =num1%10;
//         if (rem==0)
//         {
//             rem = 1;
//             num1=num1/10;
//             num2=num2*10+rem;
//         }
//         num1= 0;
//         while (num2>0)
//         {
//             int r = num2%10;
//             num1=num1*10+r;
//             num2/=10;
//         }

//      }
//      printf("The nubar:%d",num1);
// }