#include<stdio.h>
#include<stdlib.h>

int main(){
long long num[]={2L,7L,8L,3L};
long long *ptr=num;
int i=0;
for(int i=1;i<sizeof(num)/sizeof(num[0]);++i){
    *(ptr+i)=num[i];
}
for(int i=0;i<5;i++){
printf("num[%d]=%llu , (ptr+%d)=%llu \n",i,num[i],i,(long long)(ptr+i));
}
return 0;
}
