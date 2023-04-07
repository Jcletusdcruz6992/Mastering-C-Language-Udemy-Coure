#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
int main(){
char text[]="How are you doing brother - ,am doing well -tHANKS!";
const char ch[2]="-";
char *token;
token=strtok(text,ch);
 printf("%s \n",token);
while(token!=NULL){
    printf("%s \n",token);
    token=strtok(NULL,ch);
}
return 0;
}
