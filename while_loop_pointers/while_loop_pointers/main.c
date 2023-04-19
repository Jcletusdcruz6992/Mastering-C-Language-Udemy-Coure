#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void copyString(char *from, char *to){
while(*from){
    *to++=*from++;
    *to="\0";
}
}

int main(){
char string1[]="James is awesome";
char string2[50];
copyString(string1,string2);
printf("%s",string2);
return 0;
}
