#include<stdio.h>
void main(){
    int a,i=2,flag=0;
    printf("ENETR A NUMBER :- ");
    scanf("%d",&a);
    while(i<=a/2){
        if(a%i==0){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("NOT PRIME NUMBER");
    }
    else{
        printf("PRIME NUMBER");
    }
}