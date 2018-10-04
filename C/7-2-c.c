#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define H 100000

static double g=9.8;

int main(void){
  double y0,y,x0,x,st,v0,vx,v,ht,h;
  
  st=45*(M_PI/180.0);
  v0=(100000/3600)*sin(st);
  vx=(100000/3600)*cos(st);
  y0=0.0;
  h=1.0/H;
  ht=0.0;
  x0=0.0;
  
  do{
    v=v0+ht*(-g);
    y=y0+v0*ht+(1.0/2.0)*(-g)*ht*ht;
    x=x0+vx*ht;
    printf("%lf,%lf\n",x,y);
    ht+=h;
  } while(y>=0.0);
  return 0;
}
