#include<stdio.h>

#define MaxSize 100
int stack[MaxSize];
int sp;
int push(int);
int pop(int *);

int main(void){
  int c,n;

  while(printf("]"),(c=getchar())!=EOF){//入力を一文字単位読み取る
    rewind(stdin);//ヴァッファの削除
    if(c=='i' || c=='I'){
      printf("data--> ");
      scanf("%d",&n);rewind(stdin);
      if(push(n)==-1)
        printf("Stack is full\n");
    }
    if(c =='o' || c=='O'){
      if(pop(&n)==-1)
        printf("Stack is empty\n");
      else
        printf("stack data --> %d\n",n);
    }
  }
}

int push(int n){
  if(sp<MaxSize){
    stack[sp]=n;
    sp++;
    return 0;
  }
  else
  return -1;
}

int pop(int *n){
  if(sp>0){
    sp--;
    *n=stack[sp];//一段下げてポインタに格納
    return 0;
  }
  else
  return -1;
}
