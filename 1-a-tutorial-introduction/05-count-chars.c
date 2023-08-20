#include <stdio.h>

int main() {
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%1d\n", nc);
}

// long integers are 32 bits, ints are 16: max val 32767
// ctrl+D TWICE ends input