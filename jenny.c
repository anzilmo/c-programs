#include <stdio.h>
int main()
{
    int oreng = 999 , bannan = 1000, apple = 490 , greep = 38, result;
 
     result = ( bannan == apple ) & ( apple > oreng);
     printf(" bannan== apple ( apple > oreng )  is %d \n ",result );
     result = ( greep <= apple ) || ( oreng = bannan);
     printf(" (greep<= aplle) (oreng == bannan ) is %d \n ", result);
     result = ! (bannan = apple);
     printf("!(bannan = apple) %d \n ",result);
     printf("%d==%d is %d \n ",bannan,apple,bannan==apple);
     printf("%d<%d is %d \n",oreng,greep,oreng>greep); 
      

     return 0;
}
int main(){
    int h = 300 ,f = 500;
    float percentage; 
    percentage = (h / f )= (*);
    printf("h/f= * %d",percentage);   

}