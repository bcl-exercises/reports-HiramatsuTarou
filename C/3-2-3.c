#include<stdio.h>

int main(void){
  int x=1;
  while(1){
    x+=1;
    printf("%d",x);
    if(x/10 == 1)
      break;
  }
  return(0);
}
