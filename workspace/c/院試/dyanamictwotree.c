#include<stdio.h>
#include<string.h>
#include<string.h>

//構造体の宣言
struct tnode{
  struct tnode *left;
  char name[12];
  struct tnode *right;
};

struct tnode *talloc(void);

int main(void){
  char dat[12];
  struct tnode *root,*p,*old;

  root=talloc();
  scanf("%s",root->name);  
}


struct tnode *talloc(void){
  return (struct tnode *)malloc(sizeof(struct tnode));
}
