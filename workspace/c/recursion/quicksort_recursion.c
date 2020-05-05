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
  int
  if(left<right){
    m=(left+right)/2;
    t=a[m];a[m]=a[left];a[left]=t;
    s=a[left];
    i=left,j=right+1;
    while(1){
      while(a[i++]<s)
      while(a[j--]>s)
      if(i>j)break;
      t=a[i];a[i]=a[j];a[j]=t;
    }
    a[left]=a[j];a[j]=s;

    quick(a,left,j-1);
    quick(a,j+1,right);


  }
  return 0;

}
