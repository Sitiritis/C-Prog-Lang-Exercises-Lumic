#include <stdio.h>

// This program outputs corresponding values of degrees in fahrenheits and celsius

main()
{
  int lower = -300, upper = 300, step = 20;
  float cels = lower, fars;

  while (cels <= upper) {
    fars = (9.0 * cels) / 5.0 + 32.0;
    printf("%4.0f\t%8.3f\n", cels, fars);
    cels += step;
  }
}
