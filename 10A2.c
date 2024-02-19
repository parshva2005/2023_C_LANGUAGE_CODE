#include<stdio.h>
void main(){
    int a,sum=0,count=0,avg=0;
    printf("ENTER -1 WHEN YOU WONT ANSWER\n");
    while(a!=-1){
        printf("ENTER A NUMBER :- ");
        scanf("%d",&a);
        sum=sum+a;
        count++;
    }
    sum=sum+1;
    count--;
    avg=sum/count;
    printf("SUM OF YOUR GIVEN NUMBERS :- %d\n",sum);
    printf("AVG OF YOUR GIVEN NUMBERS :- %d",avg);
}