#include<stdio.h>
void main(){
    int a,i=1,multi=1;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    while(i<=a){
        multi=multi*i;
        i++;
    }
    printf("FACTORIAL = %d",multi);
}