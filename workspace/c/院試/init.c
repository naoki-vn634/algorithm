#include<stdio.h>

#define N 5
int board[N+2][N+2];
int cover[N+2][N+2];


void init(){
  int i,j;

  for(i=0;i<N+2;i++){
    for(j=0;j<N+2;j++){
      cover[i][j]=9;
      if(i==0 || i==N+1 || j==0 || j==N+1){
        board[i][j]= -1;
      }
    }
  }
}

int main(){
  int i,j,k,l;
  init();
  for(i=0;i<N+2;i++){
    for(j=0;j<N+2;j++){
      printf("%d ",board[i][j]);
    }
    printf("\n");
  }

  for(k=0;k<N+2;k++){
    for(l=0;l<N+2;l++){
      printf("%d ",cover[k][l]);
    }
    printf("\n");
  }
  return 0;
}
