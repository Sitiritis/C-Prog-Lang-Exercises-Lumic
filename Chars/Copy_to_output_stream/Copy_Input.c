#include <stdio.h>

main()
{
  int c = 0, next_c = -1;
  printf("Input string to copy\n");

  while( (c = getchar()) != '\n' )
  {
    putchar(c);

    if (c == ' ')
    {
      while ( (next_c = getchar()) == ' ');
      putchar(next_c);
    }

  }

  printf("\n");
}
