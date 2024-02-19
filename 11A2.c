#include<stdio.h>
void main(){
    int a,i,sum=0;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("SUM IS :- %d",sum);
}