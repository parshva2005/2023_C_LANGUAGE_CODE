#include<stdio.h>
void main(){
    int n;
    printf("ENTER HOW MANY NUMBERS YOU WANT :- ");
    scanf("%d",&n);
    int i,j,temp,a[n];
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Before Sorting ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n; j++) { 
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter Sorting ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
/*
A B C D F G F D C B A
A B C D F   F D C B A 
A B C D       D C B A
A B C           C B A
A B               B A
A                   A
*/