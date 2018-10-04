#include <stdio.h>
#include <stdlib.h>

/* main */
int main(int argc, char *argv[]) {
    int i, *p;
    int nmemb;

    nmemb=atoi(argv[1])
    if ( (p = (int *)calloc(nmemb, sizeof(int))) == NULL ) {
        fprintf(stderr, "メモリが確保できません.\n");
        return EXIT_FAILURE;
    }

    for ( i = 0; i < nmemb; i++ ) {
      p[i]=i;
      printf(" %d", p[i]);
    }
    printf("\n");

    /* メモリ領域の解放 */
    free(p);

    return EXIT_SUCCESS;
}
