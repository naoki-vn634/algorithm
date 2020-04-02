#include<stdio.h>

long kaijo(int);

int main(void){
  int a=0;
  printf("Type Integer");
  scanf("%d",&a);
  printf("%2d!=%10ld\n",a,kaijo(a));
  return 0;
}

long kaijo(int n){
  if(n==0)
  return 1L;
  else
  return n*kaijo(n-1);
}
