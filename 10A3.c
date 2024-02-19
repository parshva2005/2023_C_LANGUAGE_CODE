#include<stdio.h>
void main(){
    int a,i=2,count=0;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    while(i<=a/2){
        if(a%i==0){
            count++;
        }
        i++;
    }
    if(count==0){
        printf("PRIME NUMBER");
    }
    else{
        printf("NOT PRIME NUMBER");
    }
}