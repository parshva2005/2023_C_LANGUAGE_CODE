#include<stdio.h>
void main(){
    int *p,a;
    printf("ENTER A VALUE OF a :- ");
    scanf("%d",&a);
    p=&a;
    printf("VALUE OF VARIABLE :- %d",*p);
    printf("\nADDRESS OF VARIABLE :- %d",p);
}