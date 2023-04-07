#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char str1[]="Hello, how are you?";
char str2[50];
printf("Enter the second string \n");
scanf("%s",str2);
printf("%s \n",str2);
strcat(str1,str2);
printf("After catenation \n");
printf("%s \n",str1);
printf("%s \n",str2);
return 0;

}
