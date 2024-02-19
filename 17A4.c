#include<stdio.h>
void main(){
    int *p1,a,*p2,b,d;
    printf("ENTER A NUMBER 1 :- ");
    scanf("%d",&a);
    printf("ENTER A NUMBER 2 :- ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf("BEFORE SWAP:- %d  %d\n",*p1,*p2);
    d=*p2;
    *p2=*p1;
    *p1=d;
    printf("AFTER SWAP:- %d %d",*p1,*p2);
}