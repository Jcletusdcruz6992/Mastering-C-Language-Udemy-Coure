#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
char text[50];
printf("Enter the string you want to convert to upper and lower cases respectively \n");
scanf("%s",text);
for(int i=0;(text[i]=(char)toupper(text[i]))!='\0';++i);
printf("%s \n",text);
for(int i=0;(text[i]=(char)tolower(text[i]))!='\0';++i);
printf("%s \n",text);
return 0;
}
