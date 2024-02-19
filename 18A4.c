#include<stdio.h>
float max(float,float,float);
void main(){
    float a,b,c;
    printf("ENTER A NUMBER 1 :- ");
    scanf("%f",&a);
    printf("ENTER A NUMBER 2 :- ");
    scanf("%f",&b);
    printf("ENTER A NUMBER 3 :- ");
    scanf("%f",&c);
    float d=max(a,b,c);
    printf("MAX NUMBER IS %f",d); 
}
float max(float a,float b,float c){
    float d;
    d=a>b?(a>c?a:c):(b>c?b:c);
    return d;
}