void process(int i,int j){
  ll=c;rr=c;
  if(cell[i][j]==a){
    cell[i][j]=b;
  }
  while(cell[i][ll-1]==a){
    cell[i][ll-1]=b;
    ll--;
  }
  while(cell[i][rr+1]==a){
    cell[i][rr+1]=b;
    rr++;
  }
}

void scan_rightmost(int r,int c,int rr,int a){
  int right=-1;
  int i=c;
  while(i<=rr){
    if(cell[r][i]==a){
      right=i;
    }
    i++;
  }
  return right;
}
