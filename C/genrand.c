#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  int i;
  double arnd;
  FILE *fp;
  srand((unsigned)time(NULL));  
  for(i = 0; i < 100; i++){
    arnd = rand()/(1.0+RAND_MAX); /* [0,1]の小数の乱数の計算!!!! */
    printf("%f\n", arnd); 
  }
  return(0);
}
