#include <stdio.h>
#include <stdlib.h>

#include "module1.h"
#include "module2.h"

int main()
{
  println_float_fields(1.0);
  println_float_fields(1.5);
  println_float_fields(-2.0);
  println_float_fields(-2.5);
  
  return 0;
}