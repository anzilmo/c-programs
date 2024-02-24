#include <stdio.h>
 
 int main()
  {
    int a = 5 , b = 5 , c = 10,result;
    result = ( a == b ) && ( c > b);
     
      result = ( a == b ) && ( c > b);
      printf ( " ( a == b ) && (c > b ) is %d  \n ",result);
      result = ( a == b) || ( c == a);
      printf ("a == b) || (c == a) is %d \n",result);
      result  = !( a != b );
      printf("!(a !=b ) is %d \n",result);
      

      
       return 0;
  }
