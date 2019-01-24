#include <stdio.h>

#define STEP 20
#define UPPER 300
#define LOWER -300

main()
{
  for (int far = UPPER; far >= LOWER; far -= STEP)
    printf("%4d\t%8.3f\n", far, (5.0 * (far - 32)) / 9.0 );
}
