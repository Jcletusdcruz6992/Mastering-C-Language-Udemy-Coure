#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int x,int y);
float absolute(float c);
float sq(float s);
int main()
{
    int a;
    int b;
    int g;
    float c;
    float s;
    float q;
    printf("Enter the first number to find the GCD \n");
    scanf("%d",&a);
    printf("Enter the second number to find the GCD \n");
    scanf("%d",&b);
    printf("Enter any float or int to find the absolute value of any number \n");
    scanf("%f",&c);
    c=absolute(c);
    g=gcd(a,b);
    printf("Enter a number to find the square root of a number \n");
    scanf("%f",&s);

    printf("Gcd of a and b is %d \n",g);
    printf("Absolute value of the float value is %f \n",c);
     q=sq(s);
    printf("Square root of %f is %f \n",s,q);

    return 0;

}

float sq(float s){
if(s<0){
        printf("You have entered a negative number \n");
    return -1;
}
else{
    return sqrt(s);
}
}

float absolute(float c){
    float x;
    x=c*c;
    x=sqrt(x);
    return x;

}

int gcd(int x,int y){
int r;
int temp;                    //Assuming x must be always larger
if(x>y){
   x=x;
   y=y;
}
else if(x<y){
    temp=x;
    x=y;
    y=temp;

}
else{
    return x/y;
}

while(r!=0){
    r=x%y;
    if(r==0){
        return y;
    }
    x=y;
    y=r;
    gcd(x,y);

}

}
