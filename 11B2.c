#include<stdio.h>
void main(){
    int a,i,digit,count=0,rem;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    printf("ENTER YOUR DIGIT :- ");
    scanf("%d",&digit);
    for(;a!=0;){
        rem=a%10;
        if(rem==digit){
            count++;
        }
        a=a/10;
    }
    printf("%d",count);
}