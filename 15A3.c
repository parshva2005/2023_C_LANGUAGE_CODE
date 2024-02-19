#include<stdio.h>
void main(){
    int n;
    printf("HOW MANY NUMBER OF ELEMENTS YOU WANT:- ");
    scanf("%d",&n);
    int a[n],i,count=0;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            count++;
        }
    }
    printf("number of elements divisible by 3 :- %d",count);
}