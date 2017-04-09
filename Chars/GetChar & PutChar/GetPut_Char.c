#include <stdio.h>

main()
{
  printf("Input 1 character:\n");
  int c = getchar();
  printf("getchar() = %d = %c\ngetchar() != EOF = %d\nEOF = %d\n", c, c, c != EOF, EOF);

  getchar(); // somehow catches newline symbol
  getchar();
}
