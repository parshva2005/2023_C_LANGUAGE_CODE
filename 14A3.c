#include<stdio.h>
void main(){
    int n;
    printf("ENTER HOW NUMBERS YOU WANT :- ");
    scanf("%d",&n);
    int a[n],i,odd=0,even=0;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\nODD NUMBERS :- %d",odd);
    printf("\nEVEN NUMBERS :- %d",even);
}