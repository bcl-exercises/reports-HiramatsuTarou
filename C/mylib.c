#include <stdio.h>
#include <stdlib.h>

FILE* fRopen(char* fname){
  FILE* fp;
   if((fp = fopen(fname, "r")) == NULL)
     fprintf(stderr, "Failed to open %s\n", fname);
   return fp;
}

FILE* fWopen(char* fname){
  FILE* fp;
   if((fp = fopen(fname, "w")) == NULL)
     fprintf(stderr, "Failed to open %s\n", fname);
   return fp;
}

FILE* fRPopen(char* fname){
  FILE* fp;
  
  if(fname[0]=='-'){
    fp=stdin;
  }
  else{
    if((fp = fopen(fname, "r")) == NULL)
      fprintf(stderr, "Failed to open %s\n", fname);
  }
  return fp;
}
