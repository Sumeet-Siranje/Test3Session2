#include<stdio.h>
void input(int *n,int *r){
  printf("enter the number of object from set\n");
  scanf("%d",n);
  printf("number of choosing object from set\n");
  scanf("%d",r);
}
int ncr(int n,int r){
int x,y,z,result;
  x=1;
  y=1;
  z=1;
  for(int i=1;i<=n;i++){
    x*=i;
    }
  for(int i=1;i<=n-r;i++){
    y*=i;
    }
  for(int i=1;i<=r;i++){
    z*=i;
}
  result=x/(y*z);
  return result;
  }
void output(int n,int r,int result){
  printf("the given %dC%d is %d\n",n,r,result);
}
int main(){
  int n,r,result;
  input(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
  
}