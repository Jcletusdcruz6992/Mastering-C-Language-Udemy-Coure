#include<stdio.h>
#include<stdlib.h>

int main(){
int q=9679;
int *p=&q;
printf("p=%p,*p=%d,q=%d,&q=%p,%p",p,*p,q,&q,&p);
return 0;

}
