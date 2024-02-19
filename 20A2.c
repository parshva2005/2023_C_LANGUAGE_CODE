#include<stdio.h>
struct Book{
    char tit[100],aut[100];
    int pub;
    float price;
}s[3];
void main(){
    int i;
    printf("FILL BOOK DETAILS :\n");
    for(i=0;i<3;i++){
        printf("ENTER A TITAL NAME :- ");
        scanf("%s",&s[i].tit);
        printf("ENTER AN AUTHER NAME :- ");
        scanf("%s",&s[i].aut);
        printf("ENTER A PUBLICATION YEAR :- ");
        scanf("%d",&s[i].pub);
        printf("ENTER A PRICE :- ");
        scanf("%f",&s[i].price);
    }
    printf("YOUR BOOK DETAILS:\n");
    for(i=0;i<3;i++){
        printf("book %d %s %s %d %f\n",i,s[i].tit,s[i].aut,s[i].pub,s[i].price);
    }
}