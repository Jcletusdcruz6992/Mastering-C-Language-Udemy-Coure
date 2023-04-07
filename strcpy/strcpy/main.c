#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char str1[]="How are you doing John";
printf("Length of str1 is %d \n",strlen(str1));
char temp[50];
memset(temp,'/0',sizeof(temp));
strncpy(temp,str1,sizeof(temp)-1);
printf("temp=%s",temp);
return 0;


}
