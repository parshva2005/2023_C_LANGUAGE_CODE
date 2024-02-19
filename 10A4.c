#include<stdio.h>
void main(){
    int a,count=0,rem,rev=0,b=0;
    printf("ENETR A NUMBER :- ");
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        a=a/10;
        rev=rev*10+rem;
    }
    a=rev;
    while(a!=0){
        rem=a%10;
        a=a/10;
        b=b*10+rem;
        printf("%d\n",rem);
    }
}