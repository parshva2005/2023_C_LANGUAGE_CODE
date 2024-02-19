#include<stdio.h>
void main(){
    int *p1,*p2,a,b;
    printf("ENTER A VALUE OF VARIABLE 1 :- ");
    scanf("%d",&a);
    printf("ENTER A VALUE OF VARIABLE 2 :- ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf("SUM = %d",*p1+*p2);
}