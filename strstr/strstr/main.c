#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
char text[]="All is well going so far";
char word[]="going";
char *ptr=NULL;
ptr=strstr(text,word);
printf("%p",ptr);
}
