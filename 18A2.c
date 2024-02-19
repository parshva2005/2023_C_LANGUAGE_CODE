#include<stdio.h>
void fun1(int,int);
void main(){
    int a,b;
    printf("ENTER A NUMBER 1 :- ");
    scanf("%d",&a);
    printf("ENTER A NUMBER 2 :- ");
    scanf("%d",&b);
    fun1(a,b);
}
void fun1(int a,int b){
    if(a>b){
        printf("%d > %d",a,b);
    }
    else{
        printf("%d > %d",b,a);
    }
}
