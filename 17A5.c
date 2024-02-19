#include<stdio.h>
void main(){
    int n;
    printf("ENTER A NUMBER :- ");
    scanf("%d",&n);
    int *p[n],a[n],i;
    for(i=0;i<n;i++){
        printf("ENTER A ELEMENT a[%d] :- ",i+1);
        scanf("%d",&a[i]);
        p[i]=&a[i];
    }                                                                                                                                                                                                                                                                                                                        
    for(i=0;i<n;i++){
        printf("YOUR ELEMENT %d\n",*p[i]);
    }
}