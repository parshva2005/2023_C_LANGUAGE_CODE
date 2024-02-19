#include<stdio.h>
void main(){
    int *p1,a;
    char *p2,b;
    float *p3,c;
    double *p4,d;
    printf("ENTER A INTEGER :- ");
    scanf("%d",&a);
    printf("ENTER A CHARACTER :- ");
    scanf(" %c",&b);
    printf("ENTER A FLOAT :- ");
    scanf("%f",&c);
    printf("ENTER A DOUBLE :- ");
    scanf("%lf",&d);
    p1=&a; p2=&b; p3=&c; p4=&d;
    printf("\nADDRESS\n");
    printf("INT = %d\n",p1);
    printf("CHARACTER = %d\n",p2);
    printf("FLOAT = %d\n",p3);
    printf("DOUBLE = %d",p4);
    printf("\nVALUE\n");
    printf("INT = %d\n",*p1);
    printf("CHARACTER = %c\n",*p2);
    printf("FLOAT = %f\n",*p3);
    printf("DOUBLE = %lf",*p4);
}