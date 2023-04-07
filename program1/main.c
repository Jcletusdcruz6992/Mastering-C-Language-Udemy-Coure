/*
Author:James Cletus Dcruz
Topic:Program that prints my name
Date: 2023-03-06
Assuming N is larger
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
int N;
int M;
int side;

int remaining_side;
int area;
int x;
printf("Enter N \n");
scanf("%d",&N);
printf("Entered side N is %d \n",N);
printf("Enter M \n");
scanf("%d",&M);
printf("Entered side M is %d \n",M);

side=M;// Assuming M is shorter than N
remaining_side=N-M;
area=N*M;
if (N!=M)
    x=(area-M*M)/(N-M)*(N-M);
else
     x=0;

printf("Output %dx%d,",side,side);
while(x>0){
printf("%dx%d,",N-M,N-M);
x=x-1;
}


return 0;



}
