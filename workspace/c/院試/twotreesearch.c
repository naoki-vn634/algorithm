#include <stdio.h>

#define N 10

int main(void){
  int a[]={2,3,10,15,19,27,40,50,67,100};
  int key,low,high,mid,flag=0;

  printf("what number do you search?\n");
  scanf("%d",&key);
  low=0;
  high=N-1;
  while(low<=high){
    mid=(low+high)/2;
    if(key==a[mid]){
      printf("%d is found at %d position\n",a[mid],mid);
      flag=1;
      break;
    }
    if(key>mid[a])
    low=mid+1;
    else
    high=mid-1;
  }
  if(flag!=1)
  printf("choosen number isn't found\n");

}
