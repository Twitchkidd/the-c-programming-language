#include <stdio.h>

int main() {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
}

// '\n' is a character constant, 10 in my case (ASCII)
// "\n" is a string constant that has one character