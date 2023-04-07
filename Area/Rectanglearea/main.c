#include<stdio.h>
#include<stdlib.h>
int main(){

double height=0;
double length=0;
double breadth=0;
double area=0;
double perimeter=0;

printf("Enter length of the rectangle \n ");
scanf("%lf",&length);
printf("Enter breadth of rectangle \n");
scanf("%lf",&breadth);
printf("Enter height of rectangle \n");
scanf("%lf",&height);

area=length*breadth;
perimeter=2*(length+breadth);
printf("Area of a rectangle is %0.2lf \n",area);
printf("Perimeter of a rectangle is %0.2lf \n",perimeter);
return 0;
}
