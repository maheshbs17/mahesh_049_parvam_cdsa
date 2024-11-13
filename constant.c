#include<stdio.h>
void main(){
    int t=700;
    const int *p=&t; //cannot change the value of t using the pointer p
    (*p)++;
    t++;
    printf("%d\n",t);
}