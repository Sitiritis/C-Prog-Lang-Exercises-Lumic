#include <stdio.h>

// This program outputs corresponding values of degrees in celsius and fahrenheits

main()
{
  int lower = -300, upper = 300, step = 20;
  float far = lower, cels;

  while (far <= upper)  {
    cels = (5.0 * (far - 32.0)) / 9.0;
    printf("%4.0f\t%8.3f\n", far, cels);
    far += step;
  }
}
