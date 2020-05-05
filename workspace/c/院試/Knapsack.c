#include<stdio.h>
#define limit 8//ナップサックの容量
#define n 5//品物の数
#define min 1

int main(void){
  struct body{
    //構造体の生成
    char name[20];//品名
    int size;//重さ
    long price;//価格
  }a[]={{"plum",4,4500},{"apple",5,5700},{"orange",2,2250},{"strawberry",1,1100},{"melon",6,6700}};
  long newvalue[limit+1],value[limit+1];//value[0]~value[limit]が生成
  int item[limit+1],//item[0]~item[limit]が生成
    i,s,p;

  for(s=0;s<=limit;s++){
    value[s]=0; //初期値の代入のみ
  }
  for(i=0;i<n;i++){         //品物選択
    for(s=a[i].size;s<=limit;s++){  //品物a[i]においてナップサックのサイズ拡張していき最適解探索
      p=s-a[i].size;  //a[i]を入れるとして、残りのナップザックの空きサイズ
      newvalue[s]=value[p]+a[i].price;//すでに定義されたvalue+選択された品物の価格
      if(newvalue[s]>value[s]){
      value[s]=newvalue[s];
      item[s]=i;//最適解の更新
      }
      printf("%ld and item is %d\n",value[s],item[s]);
    }
  }
  printf("     品物　　価格　\n");
  for(s=limit;s>=min;s=s-a[item[s]].size)
  printf("%10s%5ld\n",a[item[s]].name,a[item[s]].price);
  printf("     合計    %5ld\n",value[limit]);
  return 0;

}
