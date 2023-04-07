#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
char text[]={"13.5 14.2 2.256"};
char *pstr=text;
char *ptr=NULL;
double value=0.0;
while(1){
    value=strtod(pstr,&ptr);
    if(pstr==ptr){
        break;
    }
    else{
        printf("%f",value);
        pstr=ptr;
    }
}
}
