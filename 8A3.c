#include<stdio.h>
void main(){
    float i;
    int a,b;
    printf("ENTER A NUMBER 1 :- ");
    scanf("%d",&a);
    printf("ENTER A NUMBER 2 :- ");
    scanf("%d",&b);
    i=a;
    while(i<=b){
        printf("%.2f\n",i/2);
        i++;
    }
}