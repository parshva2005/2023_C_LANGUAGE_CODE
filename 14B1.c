#include<stdio.h>
void main(){
    int n;
    printf("ENTER HOW MANY NUMBERS YOU WANTS :- ");
    scanf("%d",&n);
    int a[n],sum=0,avg,count=0,i,j;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    for(j=0;j<n;j++){
        if(a[j]>avg){
            count++;
        }
    }
    printf("YOUR NUMBER WHOME GREATERTHAN AVG :- %d",count);
}