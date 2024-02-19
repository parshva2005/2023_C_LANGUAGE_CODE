#include<stdio.h>
void si(int,int,int);
void main(){
    int p,r,t;
    printf("ENTER PRINCIPAL :- ");
    scanf("%d",&p);
    printf("ENTER INTEREST RATE :- ");
    scanf("%d",&r);
    printf("ENTER TIME IN YEAR :- ");
    scanf("%d",&t);
    si(p,r,t);
}
void si(int a,int b,int c){
    printf("SIMPLE INTEREST = %d",(a*b*c)/100);
}