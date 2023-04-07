#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char text[50];
int alphaCount=0;
int digitCount=0;
printf("Enter the string \n");
scanf("%s",text);
printf("Entered string is : %s \n",text);
int i=0;
while(text[i]){
    if(isalpha(text[i])){
        ++alphaCount;
    }
    else if(isdigit(text[i])){
        ++digitCount;
    }
    i++;
}
printf("Alpha count is %d \n",alphaCount);
printf("Digit count is %d \n",digitCount);
return 0;
}
