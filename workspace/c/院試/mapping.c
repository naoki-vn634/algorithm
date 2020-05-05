#include<stdio.h>
#define N 20

int main(void){
  int a[]={12,33,4,5,56,78,99,12,33,45,67,63,77,54,65,90,100,23,53,53};
  int i,rank,hist[11];//hist[i]はhist[0]~hist[i-1]を生成

  for(i=0;i<10;i++)
  hist[i]=0;

  for(i=0;i<N;i++){
    rank=a[i]/10;
    if(0<=rank && rank<=10)
    hist[rank]++;
  }

  for(i=0;i<=10;i++)
  printf("%3d - :%3d\n",i*10,hist[i]);


}
