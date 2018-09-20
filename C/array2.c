#include <stdio.h>
#include <stdlib.h>

/* main */
int main(int argc, char *argv[]) {

  int i, j, n=atoi(argv[1]);
  int (*mt)[n];

 if((mt = malloc(sizeof(int) * n * n))== NULL ) {
        return EXIT_FAILURE;
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

free(mt);
    return EXIT_SUCCESS;
}
