#include<stdio.h>
#define N 10

int main(void){
  int i,j;
  int a[]={56,25,67,88,100,61,55,67,76,56};
  int ranking[N];

  for(i=0;i<N;i++){
    ranking[i]=1;
    for(j=1;j<N;j++){
      if(a[j]>a[i])
      ranking[i]++;
    }
  }
  printf("ranking  Number\n");
  for(i=0;i<N;i++){
    printf("%6d%6d\n",a[i],ranking[i]);
  }
  return 0;


}
