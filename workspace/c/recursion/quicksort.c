#include<stdio.h>

int quick(int *,int,int);

#define N 10

int main(void){
  static int a[]={41,33,53,66,34,2,45,66,7,88};
  int k;

  quick(a,0,N-1);

  for(k=0;k<N;k++)
  printf("%4d",a[k]);
  printf("\n");
  return 0;

}

int quick(int a[],int left,int right){
  int s,t,i,j,k,m;
  if(left<right){
    m=(right+left)/2;//軸の設定
    t=a[m];a[m]=a[left];a[left]=t;//quicksort範囲内の一番左と軸の入れ替え
    s=a[left];//もともと設定した軸の値をsに格納
    i=left,j=right+1;
    while(1){
      while(a[++i]<s);
      while(a[--j]>s);
      if(i>=j) break;
      t=a[i];a[i]=a[j];a[j]=t;
      for(k=0;k<N;k++)
      printf("%4d",a[k]);
      printf("\n");
    }
    a[left]=a[j];a[j]=s;


    quick(a,left,j-1);
    quick(a,j+1,right);
  }
  return 0;
}
