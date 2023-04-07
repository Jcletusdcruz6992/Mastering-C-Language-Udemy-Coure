#include<stdio.h>
#include<stdint.h>
int add(int x,int y){
int result=x+y;
return result;
}
int main(){
    int x;
    int y;
printf("Enter value of x: \n");
scanf("%d",&x);
printf("Enter value of y: \n");
scanf("%d",&y);
int result=add(x,y);
printf("Result=%d \n",result);
return 0;
}
