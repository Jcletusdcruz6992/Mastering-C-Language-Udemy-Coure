#include<stdio.h>
#include<stdlib.h>

#define MONTHS 12
int main(){
int month[MONTHS]={12,33,42,13,42,17,[0]=9,[11]=12};
int index=0;
for(index=0;index<MONTHS;index++)
{
printf("Month[%d]=%d \n",index,month[index]);
}
return 0;
}
