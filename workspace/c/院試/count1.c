#include<stdio.h>

int kaijo(int);



int main(void){
  int i;
  int j;

  printf("Type two numbers　inserting with space key\n");
  scanf("%d%d",&i,&j);
  printf("i+jCi=%d/%d\n",kaijo(i+j),kaijo(i)*kaijo(j));
  return 0;

}

int kaijo(int n){
  int k;
  int l=1;
  for(k=1;k<=n;k++)
  l=l*k;
  return l;
}
