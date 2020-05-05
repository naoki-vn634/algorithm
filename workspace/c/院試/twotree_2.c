#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//構造体の宣言
struct tnode{
  struct tnode *left;//自分自身の構造体へのポインタ
  char name[12];
  struct tnode *right;
};

struct tnode *talloc(void);//宣言

int main(void){
  char dat[12];
  struct tnode *root,*p,*old;

  root=talloc();//ルートノード
  scanf("%s",root->name);
  root->left=root->right=NULL;

  while(scanf("%s",dat)!=EOF){
    p=root;
    while(p!=NULL){
      old=p;
      if(strcmp(dat,p->name)<=0)
      p=p->left;
      else
      p=p->right;
    }
    p=talloc();//新しいノードの接続
    strcpy(p->name,dat);
    p->left=p->right=NULL;
    if(strcmp(dat,old->name)<=0)
    old->left=p;
    else
    old->right=p;
  }
  return 0;
}
struct tnode *talloc(void){//記憶領域の取得
  return (struct tnode *)malloc(sizeof(struct tnode));
}
