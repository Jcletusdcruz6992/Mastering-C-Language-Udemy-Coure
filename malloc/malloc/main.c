#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
char *str=NULL;
str=(char *)malloc(15*sizeof(char));
strcpy(str,"James");
printf("str=%s , Address of str=%p \n",str,str);
str=(char *)realloc(str,25);
strcat(str,".com");
printf("str=%s , Address of str=%p \n",str,str);
return 0;
free(str);
printf("str=%s , Address of str=%p \n",str,str);
}
