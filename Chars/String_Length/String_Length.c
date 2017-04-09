#include <stdio.h>

main()
{
  int length;
  for(length = 0; getchar() != '\n'; ++length);
  printf("String length = %d\n", length);

  getchar();
}
