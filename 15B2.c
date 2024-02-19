#include<stdio.h>
void main(){
    int n;
    printf("ENTER A NUMBER OF ARRAY SIZE :- ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf(" %d ",a[i]);
    }
}