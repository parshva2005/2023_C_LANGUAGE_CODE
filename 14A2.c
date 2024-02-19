#include<stdio.h>
void main(){
    int n;
    printf("ENTER HOW MANY NUMBERS YOU WANT :- ");
    scanf("%d",&n);
    int a[n],i,countp=0,countn=0;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            countp++;
        }
        else if(a[i]<0){
            countn++;
        }
    }
    printf("\nPOSITIVE NUMBERS :- %d",countp);
    printf("\nNEGATIVE NUMBERS :- %d",countn);
}