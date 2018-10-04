#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define H 100000

static double g=9.8;

int main(int argc,char *argv[]){
  double y0,x0,a,b,st,v0,vx,v,ht,h;
  
  a=atof(argv[1]);
  b=atof(argv[2]);
  st=a*(M_PI/180.0);
  v0=b*sin(st);
  vx=b*cos(st);
  y0=0.0;
  h=1.0/H;
  x0=0.0;
  
  do{
    v0=v0+h*(-g);
    y0=y0+v0*h+(1.0/2.0)*(-g)*pow(h,2.0);
    x0=x0+vx*h;
    printf("%lf,%lf\n",x0,y0);
  } while(y0>0.0);
  return 0;
}
