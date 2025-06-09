#include<stdio.h>
void hash(int a[]){
  for(int i=0;i<10;i++){
    int qd=a[i]%10;


  for(int k=0;k<10;k++){
    while(qd==a[i]){
        int qd=((a[i]%10)+k);
        k=k+1;
    }
    if(qd!=a[i]){
        printf("Value %d is in %d",a[i],qd);
    }


  }
}
int main(){
  int size,i;
  printf("Enter array size:");
  scanf("%d",&size);
  int a[size];
  printf("Enter a numbers:");
  for(i=0;i<size;i++){
  scanf("%d",&a[i]);
  }
  for(i=0;i<size;i++){
    hash(a[i]);
  }
}
