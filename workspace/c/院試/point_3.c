#include<stdio.h>

int main(void){
  float a=0.0,b=0.0,c=0.0;
  float *pa,*pb,*pc;
  pa=&a;
  pb=&b;
  pc=&c;

  printf("Input two numbers\n");
  scanf("%f",pa);
  scanf("%f",pb);
  *pc= *pa+ *pb;
  printf("addition of two numbers is %f\n",*pc);
  return 0;

}
