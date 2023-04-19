#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y){
int temp=0;
temp=*x;
*x=*y;
*y=temp;
}
int main(){
int a=76;
int b=93;
swap(&a,&b);
printf("a=%d , b=%d \n",a,b);
return 0;
}
