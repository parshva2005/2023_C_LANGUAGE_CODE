#include<stdio.h>
void main(){
    int a;
    printf("ENTER HOW MANY NUMBER YOU WANT :- ");
    scanf("%d",&a);
    int arr[a],i;
    for(i=0;i<a;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("YOUR NUMBER\n");
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    printf("\nREVERSE\n");
    for(i=a-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}