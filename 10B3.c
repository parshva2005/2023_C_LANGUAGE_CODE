#include<stdio.h>
void main(){
    int a,rem,sum=0,n;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    a=n;
    while(a<0){
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    if(n==sum){
        printf("PELINDROME");
    }
    else{
        printf("NOT PELINDROME");
    }
}