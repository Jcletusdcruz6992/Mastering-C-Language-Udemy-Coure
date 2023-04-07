#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
long num1=0L;
long num2=0L;
long *ptrNum1=NULL;


ptrNum1=&num1;
*ptrNum1=1L;
num2++;
num2+=*ptrNum1;
ptrNum1=&num2;
printf("%p \n",ptrNum1);
printf("%ld \n ",num1);
num1++;
printf("%p \n",ptrNum1);
printf("%ld \n",num2);
return 0;
}
