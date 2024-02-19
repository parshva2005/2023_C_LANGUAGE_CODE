#include<stdio.h>
#include<string.h>
void len(char a,char b);
/*void cmp(char a,char b);
void cat(char a,char b);
void rev(char a,char b);
void lwr(char a,char b);
void upr(char a,char b);
void cpy(char a,char b);*/
void main(){
    char a[100],b[100],c[100];
    printf("ENTER YOUR STRING A :- ");
    gets(a);
    printf("ENTER YOUR STRING B :- ");
    gets(b);
    printf("STRING LENGTH A :- %d\n",strlen(a));
    printf("STRING LENGTH B :- %d\n",strlen(b));
    len(a,b);
    
  /*  printf("STRING CAT :- %s\n",strcat(a,b));
    printf("STRING REVERSE A :- %s\n",strrev(a));
    printf("STRING REVERSE B :- %s\n",strrev(b));
    printf("STRING A IN LOWER CASE :- %s\n",strlwr(a));
    printf("STRING B IN LOWER CASE :- %s\n",strlwr(b));
    printf("STRING A IN UPPER CASE :- %s\n",strupr(a));
    printf("STRING B IN UPPER CASE :- %s\n",strupr(b));
    c[100]=a[100];
    printf("STRING CPY B IN A :- %s\n",strcpy(a,b));
    printf("STRING CPY A IN B :- %s\n",strcpy(b,c));*/
}
void len(char a,char b){

    printf("%d",strlen(a));
    printf("%d",strlen(b));
}