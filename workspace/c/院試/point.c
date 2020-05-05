#include<stdio.h>
int main(void){
  int a=0;
  int *pa;
  pa=&a;

  // if you wanna move to new line you should type (option+¥)
  printf("a=%d,address is %p \n",*pa,pa);

  return 0;

}
