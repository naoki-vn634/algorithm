#include<stdio.h>

//関数の宣言
int kaijo(int);

int main(void)
{
  int k;
  printf("type the number\n");
  scanf("%d",&k);
  printf("Factorial of %d is %d",k,kaijo(k));
  printf("\n");

  return 0;
}


int kaijo(int n){
  int i;
  int j=1;
  for(i=1;i<=n;i++)
    j=i*j;
    return j;

}
