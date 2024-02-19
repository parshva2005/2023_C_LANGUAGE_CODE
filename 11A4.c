#include<stdio.h>
void main(){
    int i,x,y,multi=1;
    printf("ENETER X :- ");
    scanf("%d",&x);
    printf("ENETR Y(POWER OF X) :- ");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        multi=multi*x;
    }
    printf("X^y = %d",multi);
}