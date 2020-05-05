#include<stdio.h>

long fibonacci(int);

int main(void){
  int a;int i;

  printf("type integer\n");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  printf("%d: %ld\n ",i,fibonacci(i));
  return 0;
}



long fibonacci(int n){
  if(n==1|n==0)
  return 1L;
  else
  return fibonacci(n-1)+fibonacci(n-2);

}
