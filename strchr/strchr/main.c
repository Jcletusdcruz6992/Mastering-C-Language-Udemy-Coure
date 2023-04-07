#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
char str[]="James is awesome !";
char ch='o';
char *ptr=NULL;
ptr=strchr(str,ch);
printf("%p",ptr);
return 0;
}
