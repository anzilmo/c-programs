#include <stdio.h>
int main(){
    int phy,chr,bio,mth,cop;
    float percentage ;
     
     printf("Enter of phy sub :");
     scanf("%d",&phy);
     printf("Enter of bio sub :");
     scanf("%d",&bio);
     printf("Enter of Chr sub :");
     scanf("%d",&chr);
     printf("Enter of cop sub :");
     scanf("%d",&cop);
     printf("Enter of mth sub :");
     scanf("%d",&mth);
      
      percentage = ((phy+chr+bio+mth+cop)/5.0);
      printf("\n percentage : %.2f\n",percentage); 
if (percentage>100){
    printf("invalid marke assiged");
}else if (percentage>=90){
    printf("A Grade\n");
}else if (percentage>=80){
    printf("B Grade\n");
}else if (percentage>=70){
    printf("C Grade\n");
}else if (percentage>=60){
    printf("D Grade\n");
}else if (percentage>=40){
    printf("E Grade\n");
}else{
    printf("F Grade\n");
}

return 0;
     
}



// Write a C program to input marks of five subjects Physics, Chemistry, Biology,
// Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F