#include<stdio.h>
void add(int,int);
void main(){
    int a,b;
    printf("ENTER A NUMBER 1 :- ");
    scanf("%d",&a);
    printf("ENTER A NUMBER 2 :- ");
    scanf("%d",&b);
    add(a,b);
}
void add(int a,int b){
    printf("%d + %d = %d",a,b,a+b);
}
