#include<stdio.h>
#define N 10
#define M 5

int main(void){
  int a[]={2,4,5,7,8,10,15,20,30,40},b[]={6,11,25,33,35},c[M+N];
  int i,j,k;

  i=j=k=0;
  while(i<N && j<M){//両方とも終端まで行ってない
    if(a[i]<=b[j])
    c[k++]=a[i++];
    else
    c[k++]=b[j++];
  }
  while(i<N)
  c[k++]=a[i++];
  while(j<M)
  c[k++]=b[j++];

  for(i=0;i<M+N;i++)
  printf("%d ",c[i]);
  printf("\n");
}
