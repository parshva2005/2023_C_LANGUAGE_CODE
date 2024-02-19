#include<stdio.h>
struct Employee{
    char name[100],deg[100];
    int age;
    float sal;
}s1;
void main(){
    int i;
    printf("ENTER AN EMPLOYEE NAME :- ");
    gets(s1.name);
    printf("ENTER AN EMPLOYEE DEGREE :- ");
    gets(s1.deg);
    printf("ENTER AN EMPLOYEE AGE :- ");
    scanf("%d",&s1.age);
    printf("ENTER AN EMPLOYEE SALARY(IN LAKH) :- ");
    scanf("%f",&s1.sal);
    printf("YOUR EMPLOYEE DETAIL:\n");
    printf("NAME :- %s",s1.name);
    printf("\nDEGREE :- %s\n",s1.deg);
    printf("AGE :- %d\n",s1.age);
    printf("SALARY :- %.2f Lakh",s1.sal);
}