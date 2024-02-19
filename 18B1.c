#include<stdio.h>
int fibbo(int,int,int);
void main(){
    int a=0,b=1,c,n,i=0;
    printf("ENTER A N :- ");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=0;i<n;i++){
        c=fibbo(a,b,c);
        a=b;
        b=c;
        printf(" %d",c);
    }
}   
int fibbo(int a,int b,int c){
    c=a+b;
    return c;
}