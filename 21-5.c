#include<stdio.h>
#include<string.h>

struct employee{
    int employeeId;
    char name[20];
    float salary;
   };

void sortBySalary(struct employee e[], int size){
    int i, j;
    struct employee temp;

    for (i=0; i<size-1; i++){
        for (j=i+1; j<size; j++){
            if (e[i].salary > e[j].salary){
               temp=e[i];
               e[i]=e[j];
               e[j]=temp;
            }
        }
    }
}
int main (){
    struct employee e[10];

for (int i=0; i<10; i++){
    printf("Enter the ID, name and salary of the employee-%d \n", i+1);
    scanf("%d",&e[i].employeeId);

    fflush(stdin);
    fgets(e[i].name, 20, stdin);
    e[i].name[strlen(e[i].name)-1]='\0';

    scanf("%f", &e[i].salary);
}

//function call
printf("\nThe details of employees in ascending order of their salaries : \n\n");
sortBySalary(e, 10);

for (int i=0; i<10; i++)
printf("Employee Id= %d , employee's name= %s , employee's salary = %0.2f\n\n", e[i].employeeId, e[i].name, e[i].salary);

    return 0;
}
