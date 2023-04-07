#include<stdio.h>
#include<stdlib.h>
int main(){
enum Company{GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
enum Company variable1,variable2,variable3;
variable1=XEROX;
variable2=GOOGLE;
variable3=EBAY;
printf("%d \n",variable1);
printf("%d \n",variable2);
printf("%d \n",variable3);
return 0;
}
