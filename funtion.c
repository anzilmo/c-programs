// #include <stdio.h> \

 
//  void greetuser(void);
//  int main(){
//     greetuser();
//     return 0;
//  } 
//   void greetuser(void){
//     printf("hello,user!\n");
//   } 
#include <stdio.h>
  void addAndprint(int a, int b);
  
  int main() {

    addAndprint(-2,8);
   
    
  }
  void addAndprint(int a,int b){
    int sum = a+b;
    printf("sum:%d\n",sum);
  }