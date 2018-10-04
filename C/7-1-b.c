#include <stdio.h>
#define H 100000000

int main(void){
  double x0,x,h;
  int t=0;

  x0=1.0;
  h=1.0/H;
  while(t<H){
  x=x0+h*x0;
  x0=x;
  t++;
  }
  printf("解：%lf\n",x);
  return 0;
}
