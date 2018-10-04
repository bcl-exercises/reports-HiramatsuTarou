#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mylib.h"
#define N 100
#define D 0.1
#define FLS

void Usage(){
  printf("Usage: getdist [option]<file>\n");
  printf("option:\n");
  printf("-h) Show this massage\n");
  printf("-a) Average, standard deviation, maximum value, minimum value are output.\n");
  printf("-g) Output a histogram\n");
}

void Ans(FILE* fp,FILE* fp2){
  char str[N];
  int cn=0,k;
  double s=0.0,ave=0.0,max=0.0,min=1.0,x,dt[N]={};

  while(fgets(str,N,fp)!=NULL){
    x=atof(str);
    dt[cn]=x;
    if(x>max)
      max=x;
    if(x<min)
      min=x;
    ave+=x;
    cn+=1;
  }

  ave/=cn;
  for(k=0;k<cn;k++){
    s+=pow((dt[k]-ave),2.0);
  }
  s/=cn;
  s=sqrt(s);
  #ifdef FLS
  fprintf(fp2,"平均:%f  ,標準偏差:%f  ,最大値:%f  ,最小値:%f\n",ave,s,max,min);
  #else
  fprintf(stdout,"平均:%lf  ,標準偏差:%lf  ,最大値:%lf  ,最小値:%lf\n",ave,s,max,min);
  #endif
}

void Ghis(FILE* fp,FILE* fp2){
  char str[N];
  double x,i=0.0;
  int a[N]={};
  int ct,j,k;

 while(fgets(str,N,fp)!=NULL){
    x=atof(str);
    ct=0;
    while(i<1.0){
      if(x>=i && x<i+D)
	a[ct]+=1;
      ct+=1;
      i+=D;
    }
    i=0.0;
  }
  ct-=1;
  #ifdef FLS
  for(j=0;j<ct;j++){
    fprintf(fp2,"%f-%f:",i,i+D);
    for(k=0;k<a[j];k++){
      fprintf(fp2,"*");
    }
    fprintf(fp2,"\n");
    i+=D;
  }
  #else
  for(j=0;j<ct;j++){
    fprintf(stdout,"%lf-%lf:",i,i+D);
    for(k=0;k<a[j];k++){
      fprintf(stdout,"*");
    }
    fprintf(stdout,"\n");
    i+=D;
  }
  #endif
}

int main(int argc, char *argv[]){
  char *agv;
  char *agv2;
  FILE *fp;
  FILE* fp2;
  char *lm;

  lm="reslut.dat";
  fp=fRopen(ln)
  fp2=fWopen(lm);
  
  agv=argv[2];
  agv2=argv[1];
  if(argc>3){
    fprintf(stderr, "一度に指定できるオプションは一つまでです.\n");
    return  EXIT_FAILURE;
  }
  fp=fRopen(agv);
  switch(agv2[1]){
  case 'a':
    Ans(fp,fp2);
    break;
  case 'g':
    Ghis(fp,fp2);
    break;
  default:
    Usage();
  }
  return 0;
}
}
