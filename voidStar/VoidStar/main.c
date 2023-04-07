#include<stdio.h>
#include<stdlib.h>
int main(){
int a=36;
float b=97.87;
char c='g';

void *ptr;
ptr=&a;
printf("Value of i=%d \n",*(int *)ptr);

ptr=&b;
printf("Value of f=%f \n",*(float *)ptr);


ptr=&c;
printf("Value of c=%c \n",*(char *)ptr);

return 0;

}
