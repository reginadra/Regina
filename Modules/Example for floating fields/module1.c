#include "module1.h"
#include <stdio.h>

void print_bits(unsigned long long v, int width)
{
  char r[width+1];
  r[width] = '\0';

  for(int i = 0; i < width; r[i++] = '0');
  while(width--)
  {
    if(v & 1)
      r[width] = '1';
    v >>= 1;
  }
  
  printf("%s", r);
}
