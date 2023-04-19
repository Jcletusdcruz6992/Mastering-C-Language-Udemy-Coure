#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char array[]="James is awesome!";
char *ptr="James is awesome!";
for(int i=0;i<strlen(array);++i){
    printf("array[%d]=%c  , *ptr=%c ,&(array[%d])=%p ,(p+%d)=%p \n ",i,array[i],*(ptr+i),i,&array[i],i,ptr+i);

}
return 0;
}
