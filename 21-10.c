#include<stdio.h>
#include<string.h>

struct marks {
int roll_no;
char name[20];
int chem_marks, maths_marks,phy_marks;
};

int main(){
    int i;
  struct marks s[5];

  // input
  for(i=0; i<5; i++){
    printf("Enter the roll_no, name, and marks of student-%d in chemistry , maths , physics respectively \n", i+1);

    scanf("%d",&s[i].roll_no);

    fflush(stdin);
    fgets(s[i].name, 20, stdin);
    s[i].name[strlen(s[i].name)-1]='\0';

    scanf("%d",&s[i].chem_marks);

    scanf("%d", &s[i].maths_marks);

    scanf("%d", &s[i].phy_marks);
  }
  printf("\n");

  for (i=0; i<5; i++){
    printf("Student%d name : %s",i+1, s[i].name);

    float p =(s[i].chem_marks + s[i].maths_marks +s[i].phy_marks)/300.0*100;
    printf("\nThe percentage : %0.2f\n\n ", p);
  }

return 0;
}
