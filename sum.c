#include<stdio.h>
#include<stdlib.h>
int sum(int n){

if(n<=1){
    return 1;
}else{
   return n+sum(n-1);
}
}
int main(){
  int n;
  printf("Enter the term of number:");
  scanf("%d",&n);
  int m=sum(n);
  printf("%d",m);
}

