#include <stdio.h>
int main()
{
    int principal = 10000 , ayis = 1000000;
    float rate = 10, tenure = 15 , intrest , reteb = 5, tenureb = 6 , intrestb ;
    intrest = (principal* rate * tenure) /100 ;
    printf("Principal * rete * tenure /100 = %1f \n",intrest);
    intrestb = (ayis * reteb * tenureb)/100 ;
    printf("simpl intrest : %1f\n",intrestb);
    principal = (rate * tenure * intrest ) /100;
    printf("principal : %1fis\n",principal);
    ayis = (principal*tenure*rate)/100;
    printf("ayis : %.2f\n",ayis);
    double originalvalue = ayis;
    int decimalPlaces = 2;
    double originalvalue2 = intrest ;
    double originalvalue3 = tenure ;
     
    printf("ROUNDED value : %.2f\n",originalvalue);
    printf("total intrest: %.2f\n",originalvalue2);
    printf("total closing years : %.f years \n",originalvalue3);
    
    
    return 0;
  
}