#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char array[]="James is awesome!";
char *ptr="James is awesome!";
for(int i=0;i<strlen(array);i++){
    printf("array[%d]=%c , Address of p=%p ,Address of &array[%d]=%p , *ptr=%c \n ",i,array[i],ptr+i,i,&array[i]+i,*(ptr+i));

}
return 0;
}
