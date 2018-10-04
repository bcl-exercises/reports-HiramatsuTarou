#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[]){
  int i,c;
  double x=0.0;
  if(argc!=3){
    printf("Usage : sum <num1> <num2>\n");
    return EXIT_FAILURE;
  }
  for(i=1;i<argc;i++){
    x+=atof(argv[i]);
  }
  printf("%lf\n",x);
  return EXIT_SUCCESS;
}
