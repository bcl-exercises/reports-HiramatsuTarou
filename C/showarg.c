#include<stdio.h>

int main( int argc, char *argv[]){

  char *a;
  int i;
  printf("%d\n",argc);
  for(i=0;i<argc;i++){
    a=argv[i];
    printf("%s ",a);
  }
  printf("\n");
}
