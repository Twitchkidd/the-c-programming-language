#include <stdio.h>

int main() {
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}

// printf uses %f for doubles and floats, %.0f suppresses the decimal and the fraction part
// a for statement must have a body, so that semicolon is a null statement