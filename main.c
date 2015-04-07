

#include <stdio.h>
#include "wordhist.h"

int main(int argc, char** argv) 
{
  char *filename;
  WordHist *hist;

  if (argc != 2) {
    fprintf(stderr, "error: you must supply a filename as an argument\n");
    return 1;
  }
  filename = argv[1];

  hist = word_hist_parse(filename);
  if (hist == NULL) {
    fprintf(stderr, "error parsing '%s'\n", filename);
    return 1;
  }
  word_hist_print(hist);
  word_hist_free(hist);

  return 0;
}
