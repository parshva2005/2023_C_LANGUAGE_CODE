#include<stdio.h>
void main(){
    int a,i=1,count=0;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    while(i<a){
        if(a%i==0){
            count++;
        }
        i++;
    }
    if(count==a){
        printf("PERFECT NO.");
    }
    else{
        printf("NOT PERFECT NO.");
    }
}