#include<stdio.h>
#include<stdlib.h>
int main(){
int array[100];
int sum=0;
float average=0.0f;
int l=0;
printf("Enter the size of array \n");
scanf("%d",&l);
for(int i=0;i<=l;i++){
        printf("Enter array value :\n ");
        scanf("%d",&array[i]);
    sum+=array[i];

}
average=(float)sum/l;
printf("Average value of array is %f \n",average);
return 0;
}
