#include<stdio.h>
struct str{
    char a[10],b[10];
    int c;
    float d;
}s1;
union uni{
    char a[10],b[10];
    int c;
    float d;
}u1;
void main(){
    printf("%d",sizeof(s1));
    printf(" %d",sizeof(u1));
}