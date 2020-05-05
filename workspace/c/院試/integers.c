#include<stdio.h>

int bigger(int a, int b){
  int c=0;
  if(a>=b) c=a;
  if(b>a)  c=b;
  return c;
}


int main(void){
  int a=0,b=0,c=0;

  printf("Input first Integer ¥n");
  scanf("%d",&a);
  printf("Input second Integer ¥n");
  scanf("%d",&b);

  c=bigger(a,b);
  printf("bigger one is %d",c);
  return 0;

}
