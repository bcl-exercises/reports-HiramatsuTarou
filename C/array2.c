#include <stdio.h>
#include <stdlib.h>

/* main */
int main(int argc, char *argv[]) {

  int i, j, n;
  int **mt;

  n=atoi(argv[1]);
  mt=(int**)calloc(n,sizeof(int*)); 
  for(i=0;i<n;i++){
    if((mt[i] = (int*)calloc(n,sizeof(int))) == NULL ) {
      fprintf(stderr, "メモリが確保できません.\n");
      return EXIT_FAILURE;
    }
  }

  for (i=0;i<n;i++) {
    for (j=0;j<n;j++) {
      if(i==j)
	mt[i][j] =1;
      else
	mt[i][j]=0;
      printf("%d", mt[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<n;i++){
    free(mt[i]);
  }
  return EXIT_SUCCESS;
}
