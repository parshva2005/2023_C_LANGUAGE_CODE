#include<stdio.h>
void main(){
    int a,rem,sum=0;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    rem=a%10;
    sum=sum+rem;
    do{
        rem=a%10;
        a=a/10;
    }while(a>0);
    sum=sum+rem;
    printf("%d",sum);
}  