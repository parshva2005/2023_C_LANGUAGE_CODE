#include<stdio.h>
void main(){
    int n;
    printf("HOW MANY NUMBER OF ELEMENTS YOU WANT:- ");
    scanf("%d",&n);
    int a[n],b[n],i;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d  ",b[i]);
    }
}