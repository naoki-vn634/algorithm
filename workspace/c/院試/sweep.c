int 1<=row,column<=N

void sweep(int row int column){
    int s,t;
    for(s=row-1;s<=row+1;row++){
      for(t=column-1;t<=column+1;column++){
        cover[s][t]=0;
      }
    }
}

void check_mine(int row,int column){
  int s,t;
  int u=0;
  for(s=row-1;s<=row+1;row++){
    for(t=column-1;t<=column+1;column++){
      if(cover[s][t]==1){
        u++;
      }
    }
  }
  if(u==0)sweep(row,column);
  else
  return 0;
}
