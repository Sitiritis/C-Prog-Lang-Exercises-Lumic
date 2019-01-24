#include <stdio.h>

main()
{
  // Part of program, which counts spaces, tabs and new lines
  printf("\nInput strings. Program will count all spaces, tabs and new lines.\nProgram stops counting after there is \'!\'.\n");
  int spc = 0, tb = 0, nl = 0, chr = 0;
  while ((chr = getchar()) != '!')
  {
    if (chr == ' ')
      ++spc;
    if (chr == '\t')
      ++tb;
    if (chr == '\n')
      ++nl;
  }
  printf("Spaces = %d, tabs = %d, new lines = %d.\n", spc, tb, nl);

}
