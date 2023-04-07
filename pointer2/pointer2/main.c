#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main()
{
    int q=0;
    int *p=NULL;
    q=546;
    p=&q;
    printf("q=%d \n",q);
    printf("address of q=%p \n",&q);
    printf("p=%p \n",p);
    printf("value of *p=%d \n",*p);
    printf("address of pointer=%p \n",(void*)&p);
    printf("Size of addrress p is %zd bytes \n",sizeof(p));
    return 0;

}
