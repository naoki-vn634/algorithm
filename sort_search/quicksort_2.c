#include<stdio.h>
#define N 8


int main(void){
  int i=0;
  int j=N-1;
  int t=5;
  int temp,s;
  int A[]={6,2,1,5,8,3,9,4};



  while(i<=j){
    while(A[i]<t)
    i++;
    while(A[j]>t)
    j--;
    if(i<＝j)
    temp=A[i];A[i]=A[j];A[j]=temp;
    for(s=0;s<N;s++)
    printf("%d ",A[s]);
    printf("\n");
    i++;
    j--;
    else
    return 0;

  }

  return 0;

}
