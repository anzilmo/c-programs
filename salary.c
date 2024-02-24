 #include <stdio.h>
 int main()
 {
    int basicsalary,Grosssalary;
    printf("entre basicsalary :",basicsalary);
    scanf("%d",&basicsalary);
    int HRA,DA;
     
  if (basicsalary<=10000){
    Grosssalary=basicsalary+basicsalary*20/100+basicsalary*80/100;
    
}else if (basicsalary<=20000){
    Grosssalary=basicsalary+basicsalary*20/100+basicsalary*80/100;
    
}else{ 
    Grosssalary=basicsalary+basicsalary*30/100+basicsalary*95/100;
  }
  printf("is groossalary :%d",Grosssalary);
  
 }
 
 //Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%