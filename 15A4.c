#include<stdio.h>
void main(){
    int n;
    printf("HOW MANY NUMBER OF ELEMENTS YOU WANT:- ");
    scanf("%d",&n);
    int a[n],i,ele;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("ENTER A ELEMENT :- ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(ele==a[i]){
           printf("%d  ",i+1);
        }
    }
}