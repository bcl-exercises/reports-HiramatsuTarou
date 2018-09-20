#include<stdio.h>
#define N 100000000
int main(void){
  int i=0;
  float x=0.1;
  for(i=0;i<N;i++){
    x=0.1*x;
    x=10.0*x;
  }
  return(0);
}
