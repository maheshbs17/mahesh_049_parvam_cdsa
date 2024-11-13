#include<stdio.h>
void main(){
    int t=700;
    int *p=&t;
    int **pptr=&p;
    printf("%d\t%d\t%d",t,*p,**pptr);
}