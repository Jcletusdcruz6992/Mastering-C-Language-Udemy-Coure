#include<stdio.h>
#include<stdlib.h>

int main(){
struct date{
int day;
int month;
int year;
};

struct date today;
struct date purchasingDaY;
today.day=21;
today.month=04;
today.year=2023;
printf("today.day=%i ,today.month =%i , today.year=%i ",today.day,today.month,today.year);
return 0;
}
