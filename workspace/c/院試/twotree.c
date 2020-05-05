#include<stdio.h>
#include<string.h>

#define nil -1
#define MaxSize 100


//構造体の宣言
struct tnode{
  int left;
  char name[12];
  int right;
};

int main(void){
  struct tnode a[MaxSize]={{  1,"Machilda",  2},
                           {  3,"Candy"   ,  4},
                           {  5,"Rolla"   ,nil},
                           {nil,"Ann"     ,nil},
                           {  6,"Emy"     ,  7},
                           {nil,"Nancy"   ,nil},
                           {nil,"Eluza"   ,nil},
                           {nil,"Lisa"    ,nil}};
  char key[12];
  int p;

  printf("Search Name -->");
  scanf("%s",key);
  p=0;
  while(p!=nil){
    if(strcmp(key,a[p].name)){
      printf("name is found\n");
      break;
    }
    else if(strcmp(key,a[p].name)<0)//アルファベット順になっているから文字の大小がアルファベット順に出てくる
    p=p[a].left;
    else
    p=p[a].right;
  }

}
