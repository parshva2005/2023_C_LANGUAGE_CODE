#include<stdio.h>
void main(){
    int a,i;
    printf("ENETR A NUMBER :- ");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
}