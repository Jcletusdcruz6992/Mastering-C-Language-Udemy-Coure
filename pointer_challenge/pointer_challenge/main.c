#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
int v=0;
int*p=NULL;
v=154;
p=&v;
printf("Address of the pointer p=%p \n",(void *)&p);
printf("Address  pointer p is pointing =%p \n",&v);
printf("Value of pointer is %d \n",*p);
printf("Address to which pointer p is pointing is %p \n",p);
return 0;




}
