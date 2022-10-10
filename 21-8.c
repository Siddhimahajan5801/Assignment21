#include<stdio.h>

struct students{
char name[20];
int studentId;
int std;
char section;
};

int main(){
    int i;
  struct students s[10];

  for (i=0; i<10; i++){
    printf("Enter the name,Id,standard and section of the student-%d \n", i+1);

    fflush(stdin);
    fgets(s[i].name, 20, stdin);
    s[i].name[strlen(s[i].name)-1]='\0';

    scanf("%d",&s[i].studentId);

    scanf("%d", &s[i].std);

    fflush(stdin);
    scanf("%c",&s[i].section);
}

printf("\n\nThe details of the students are as follows : \n\n");
for (i=0; i<10; i++){
  printf("Student's name : %s , Student's ID: %d , Student's standard : %d , student's section : %c\n\n", s[i].name, s[i].studentId, s[i].std, s[i].section);

}

    return 0;
}
