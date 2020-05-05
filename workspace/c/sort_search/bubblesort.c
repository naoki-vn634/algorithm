#include<stdio.h>
#define N 7

int main(void){
  int a[]={43,55,21,8,30,12,55,67};
  int i,j,k,temp;
  for(i=0;i<N+1;i++){
    for(j=N;j>i;j--){
      if(a[j]<a[j-1]){
        temp=a[j];a[j]=a[j-1];a[j-1]=temp;
      }
    }
  }
  for(k=0;k<N;k++){
    printf("%d ",a[k]);
  }
  return 0;
}
