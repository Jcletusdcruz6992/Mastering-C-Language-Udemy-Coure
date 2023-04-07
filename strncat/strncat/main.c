#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char src[50],dest[50];
strcpy(src,"This is source");
strcpy(dest,"This is destination");
strncat(src,dest,50);
printf("%s",src);
}
