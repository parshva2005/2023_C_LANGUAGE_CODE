#include<stdio.h>
void main(){
    int n;
    printf("ENTER A NUMBER OF ARRAY SIZE :- ");
    scanf("%d",&n);
    int a[n],i,j,k,temp;
    for(i=0;i<n;i++){
        printf("ENTER A NUMBER %d :- ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n;k++){
                    a[k]=a[k+1];
                }
                j--;
                n--;
            }
        }
    }
    printf("ARRAY AFTER REMOVING DUPLICATE ELIMENTS :- ");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}