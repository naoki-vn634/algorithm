#include<stdio.h>
#define limit 8//capacity of Knapsack
#define n 5//number of goods
#define min 1

if(i==j)
return 0;
else
  if(w[i]>j)
  return find(i+1,j);
  else
  return max(find(i+1,j),find(i+1,j-w[i])+v[i]);
