#include <stdio.h>

struct employee
{
    int emp_code;
    char emp_name[30];
    float emp_sal;
    
};

int main() {
    struct employee a;
    
   printf("\n Enter the name of employee : ");
  // gets(a.emp_name);
   fgets(a.emp_name,sizeof(a.emp_name),stdin);
   printf("\n Enter the employee code : ");
   scanf("%d",&a.emp_code);
   printf("\n Enter the salary of employee : ");
   scanf("%f",&a.emp_sal);
   printf("\n The details of the employee is : ");
   
   printf("\n The employee code is  : %d",a.emp_code);
   printf("\n The name of employee is : %s",a.emp_name);
   printf("\n The salary of the employee is : %.2f\n",a.emp_sal);
   
   
   return 0;
}