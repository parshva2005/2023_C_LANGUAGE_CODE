#include<stdio.h>
void swap2(int *,int *);
void swap1(int,int);
void main(){
    int a,b;
    printf("ENTER A NUMBER 1 :- ");
    scanf("%d",&a);
    printf("ENTER A NUMBER :- ");
    scanf("%d",&b);
    printf("BEFORE SWAP :- %d   %d\n",a,b);
    printf("\nCALL BY VALUE\n");
    swap1(a,b);
    printf("AFTER SWAP :- %d   %d\n",a,b);
    swap2(&a,&b);
    printf("\nCALL BY REFERENCE\n");
    printf("AFTER SWAP :- %d   %d",a,b);
}
void swap1(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp; 
}
void swap2(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}