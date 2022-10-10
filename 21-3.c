#include<stdio.h>

struct employee
   {
    int employeeId;
    char name[20];
    float salary;
   };

   void displayData(struct employee a1){

   printf("The employee Id, name and salary of the employee is : \n");
   printf("%d  %s  %.2f", a1.employeeId , a1.name, a1.salary );
   }

int main(){

   struct employee a = {1, "Hari", 25000.0};

   displayData(a);  //function call

    return 0;
}
