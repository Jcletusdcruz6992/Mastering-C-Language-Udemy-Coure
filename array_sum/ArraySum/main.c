#include<stdio.h>
#include<stdlib.h>
int array(int arr[],const int n){
int sum=0,*ptr;
int *const arrayEnd=(arr+n);
for(int i=ptr;i<arrayEnd;ptr++){
    sum+=*ptr;
    return sum;
}
}

int main(){
int array(int arr[],const int n);
int value[10]={1,23,34,25,6,7,8,910,34,7};
printf("Array sum is %d \n ",array(value,10));
return 0;
}
