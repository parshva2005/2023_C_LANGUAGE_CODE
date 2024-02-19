#include<stdio.h>
struct student{
    char name[20];
    int age;
    float per;
}s[5];
void main(){
    int i;
    printf("FILL STUDENT DETAIL :\n");
    for(i=0;i<5;i++){
        printf("ENTER NAME :- ");
        scanf("%s",&s[i].name);
        printf("ENTER AGE :- ");
        scanf("%d",&s[i].age);
        printf("ENTER PERCENTAGE :- ");
        scanf("%f",&s[i].per);
    }
    for(i=0;i<5;i++){
        printf("\nNAME :- %s\n",s[i].name);
        printf("AGE :- %d\n",s[i].age);
        printf("PERCENTAGE :- %.2f\n",s[i].per);
    }
}