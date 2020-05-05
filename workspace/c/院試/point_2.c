#include<stdio.h>
int change(int *a,int *b){
  int temp;

  temp=*a;
  *a=*b;
  *b=temp;

  return 0;
}

int main(void){
  int a=10;
  int b=100;
  printf("a=%d,b=%d \n",a,b);
  change(&a,&b);
  printf("After changing the number \n");
  printf("a=%d,b=%d\n",a,b);
  return 0;


}
