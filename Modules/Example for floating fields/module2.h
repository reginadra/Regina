typedef union
{
  struct {
    unsigned long long fractional: 52;
    unsigned exponent  : 11;
    int      sign      : 1;
  } ff;
  double f;
} fu;

void println_float_fields(double);

