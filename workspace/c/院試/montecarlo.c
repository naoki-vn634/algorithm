#include<stdio.h>
#include<stdlib.h>

#define N 1000

double rnd(void);

int main(void){
  double x,y,pai;
  int i,in=0;

  for(i=0;i<N;i++){
    x=rnd();
    y=rnd();
    if(x*x+y*y<=1)
    in++;
  }
  pai=(double)4*in/N;
  printf("pai is %f\n",pai);
}


double rnd(void){
  return (double)rand()/(RAND_MAX+1.0);
}
