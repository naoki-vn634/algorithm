#include<stdio.h>

long combi(int,int);

int main(void){
  int a,b;
  printf("Type the number inserting with space key");
  scanf("%d%d",&a,&b);

  if(b>a){
    printf("it's not avalable\n");
    return 0;
  }
  
  else{
    printf("%dC%d = %ld \n",a,b,combi(a,b));
    return 0;
  }

}

long combi(int n,int r){
  if(n==r|r==0)
  return 1L;
  else
  return combi(n-1,r-1)+combi(n-1,r);
}
