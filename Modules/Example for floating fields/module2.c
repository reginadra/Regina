#include <stdio.h>
#include "module1.h"
#include "module2.h"

void println_float_fields(double f) 
{
  fu u;
  u.f = f;
  printf("S: %d\t E: %04u (%04d) ", u.ff.sign, u.ff.exponent, u.ff.exponent - 1023);
  print_bits(u.ff.fractional, 52);
  printf(" <----- %f\n", u.f);
}

