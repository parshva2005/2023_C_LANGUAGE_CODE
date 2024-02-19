#include<stdio.h>
void main(){
    int a,count=0,i=1;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&a);
    while(i<=a){
        count=count+i;
        i++;
    }
    printf("SUM = %d",count);
}