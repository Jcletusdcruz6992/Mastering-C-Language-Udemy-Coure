/*
For row i = 1: 				 f(15840) = cGp
For row i = 2:				f(16465) = cmW
For row i = 3:				f(17941) = cX3


*/

#include<stdio.h>
#include<stdlib.h>

int main(){
     char arr[]={'c','G','p','m','W','X',3};
     int c=arr[0];
     int G=arr[1];
     int p=arr[2];
     int m=arr[3];
     int W=arr[4];
     int X=arr[5];
     int t=arr[6];
     printf("c=%d \n",c);
     printf("G=%d \n",G);
     printf("p=%d \n",p);
     int x=c*G*p;
     int y=c*m*W;
     int z=c*X*t;

     //int c=(int)arr[0]*(int)arr[5]*(int)arr[6];
     float d=(float)x/15840;
     float e=(float)y/16465;
     float f=(float)z/17941;
     printf("d=%f \n",d);
     printf("e=%f \n",e);
     printf("f=%f \n",f);

     return 0;


}
