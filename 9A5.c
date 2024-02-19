#include<stdio.h>
void main(){
    int a,i=1;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    while(i<=a){
        if(a%i==0){
            printf("%d,",i);
        }
        i++;
    }
}