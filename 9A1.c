#include<stdio.h>
void main(){
    int a,i=1,count=0;
    printf("ENETR A NUMBER n :- ");
    scanf("%d",&a);
    while(i<=a){
        if(i%2==0){
            count=count-i;
        }
        else{
            count=count+i;
        }
        i++;
    }
    printf("SUM OF SERIES :- %d",count);
}