#include<stdio.h>
#include<stdbool.h>
bool is_prime(int n);

int main(){
int prime[100]={0};
int count=0;
for(int i=0;i<300;i++)
{
    if(is_prime(i)){
        prime[count]=i;
        count++;
    }

}
for(int j=0;j<100;j++){
        if(prime[j]!=0){
           printf("%d ",prime[j]);
        }

}
}
bool is_prime(int n){
if(n<2){
    return false;
}
for(int i=2;i<=n/2;i++){
    if(n%i==0){
        return false;
    }

}
return true;
}
