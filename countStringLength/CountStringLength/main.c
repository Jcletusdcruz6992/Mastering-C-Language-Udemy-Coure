#include<stdio.h>
#include<stdlib.h>

int main(){
char str1[]="James is studying well ";
char str2[]="James is working hard to become an Embedded software developer";
unsigned int counter=0;
while(str1[counter]!='\0'){
    counter++;
}
printf("Length of characters in string1 is %d \n",counter);
counter=0;
while(str2[counter]!='\0'){
    counter++;
}
printf("Length of characters in string2 is %d \n",counter);
return 0;
}
