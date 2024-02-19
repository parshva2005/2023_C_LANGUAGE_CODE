#include<stdio.h>
void main(){
    int a[5],b[5],h,w,count=0,i;
    for(i=0;i<5;i++){
        printf("ENTER A HEIGHT OF PERSON %d :- ",i+1);
        scanf("%d",&a[i]);
        printf("ENTER A WEIGHT OF PERSON %d :- ",i+1);
        scanf("%d",&b[i]);
        if(a[i]>170 && b[i]<50){
            count++;
        }
    }
    printf("NUMBER OF PERSON HAVING HEIGHT GREATERTHAN 170 AND WEIGHT LESSTHAN 50 :- %d",count);

}