#include<stdio.h>
#include<string.h>

struct employee     //structure
   {
    int employeeId;
    char name[20];
    float salary;
   };


//Input function
struct employee inputData(){

    struct employee a;
    printf("Enter the employee Id, name and salary of the employee : \n");
    scanf("%d", &a.employeeId );
    fflush(stdin);
    fgets(a.name, 20, stdin);
    scanf("%f", &a.salary);

    return a;
}

int main(){
    struct employee a1;
   a1=inputData();

   printf("The employee Id, name and salary of the employee : \n");
   printf("%d  %s  %.2f", a1.employeeId , a1.name, a1.salary );

    return 0;
}
