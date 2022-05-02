#include <stdio.h>
#include <stdlib.h>

typedef union
{
  struct {
    unsigned long long fractional: 52;
    unsigned exponent  : 11;
    int      sign      : 1;
  } ff;
  double f;
} fu;

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
  

  /*
  // too hacky, better write code as above =)
  for(
    char *p = r + width - 1;
    width--;
    v >>= 1, *(--p) = v & 1 ? '1' : '0'
  )
  ; */
  
  printf("%s", r);
}

void println_float_fields(double f)
{
  fu u;
  u.f = f;
  printf("S: %d\t E: %04u (%04d) ", u.ff.sign, u.ff.exponent, u.ff.exponent - 1023);
  print_bits(u.ff.fractional, 52);
  printf(" <----- %f\n", u.f);
}

int main()
{
  println_float_fields(1.0);
  println_float_fields(1.5);
  println_float_fields(-2.0);
  println_float_fields(-2.5);
  return 0;
}