#include<stdio.h>

#define N 5
int board[N+2][N+2];
int cover[N+2][N+2];



void sweep(int row int column){
    int s,t;
    for(s=row-1;s<=row+1;row++){
      for(t=column-1;t<=column+1;column++){
        cover[s][t]=0;
      }
    }
}

void check_mine(int row,int column){
  int s,t,u,v;
  int u=0;
  for(s=row-1;s<=row+1;s++){
    for(t=column-1;t<=column+1;t++){
      if(cover[s][t]==1){
        u++;
      }
    }
    if(u==0){
      sweep(row,column);
      for(u=row-1;u<=row+1;u++){
        for(v=column-1;v<=column+1;v++){
          check_mine[u][v];
    else
    cover[row][column]=0;
}
