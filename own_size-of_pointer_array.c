#include<stdio.h>
void main(){
    int a[]={3,5,0,7,8,5,4,3,8,9};
    int size;
    int* p;
    printf("Size of pointer *p is %d\n",sizeof(*p));
    printf("Size of pointer p is %d\n",sizeof(p));
    printf("Size of pointer &p is %d\n",sizeof(&p));
    printf("Size of total array is %d\n",sizeof(a));
    size= sizeof(a)/sizeof(a[0]);
    printf("Number of elements in this array is %d\n",size);
}