#include<stdio.h>

int main(){
   struct employee
   {
    int employeeId;
    char name[20];
    float salary;
   };

   struct employee a1 = {1, "Hari", 25000.0};
   
   printf("The employee Id, name and salary of the employee is : \n");
   printf("%d  %s  %.2f", a1.employeeId , a1.name, a1.salary );
   
    return 0;
}