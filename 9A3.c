#include<stdio.h>
void main(){
    int a,b,i=1,multi=1;
    printf("ENETR A NUMBER x :- ");
    scanf("%d",&a);
    printf("ENTER A POWER OF x :- ");
    scanf("%d",&b);
    while(i<=b){
        multi=multi*a;
        i++;
    }
    printf("X^y = %d",multi);
}