#include<stdio.h>
#include<stdlib.h>
int main(){
int num=0;
int *ptr=&num;
printf("Enter the value of num ");
scanf("%d ",ptr);
printf("Value you entered is %d \n",num);
return 0;

}

