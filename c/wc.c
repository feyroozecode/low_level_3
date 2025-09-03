#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  if(argc != 2) {
    fprintf(stderr, "usage: %s <filename>\n", argv[0]);
    return 1;
  }

  FILE *file = fopen(argv[1], "r");
  if(file == NULL){
    perror("Error on open file");
    return -1;
  }

  int lines = 0;
  int words = 0;
  int chars = 0;
  int in_word = 0; // Flag to know if we are inside an word
  int c;

  while((c = fgetc(file)) != EOF){  // KEEPREEPEATING WHEN IS NOT END OF FILE
   chars++;
   if(c == '\n'){ // When is LINE TO NEXT
     lines++;
   }
   if(isspace(c)){  // DOT COUNT SPACESX
     in_word = 0;
   } else if (in_word == 0 ){
     words++;
    in_word = 1;  // COUNT WORD
   }
  }

  if(chars > 0 && (c != '\n')){
   lines++;
  }

  printf("\tLines\tWords\tChars\t\t File\n\t%d\t%d\t%d %s\n", lines, words, chars, argv[1]);

  return 0;
}
