#include <stdio.h>
#include <string.h>

// error when compiling code 

int main(int argc, const char *argv[])
{
  // ....
  // int tot = strlen(*argv); // ...really calculate total length or args + spaces between using strlen fnuction
  // ....
  
  // Regina
  int tot = 0;
  for(int i = 0; i < argc; ++i)
	  tot = tot + (int)strlen(argv[i]); // calculates total length 

  // char a[tot + 1] = *argv;
  // a[0] = 0;

  // "./a.out" "1" "2" "3" "456" -- strcat --> "./a.out 1 2 3 456"
  // puts(a);
  
  // Regina
  char a[tot]; // or a[tot + 1] and a[0] = 0 as above?
  for(int i = 0; i < argc; ++i)
	  strcat(a , argv[i]); // concatenates command line arguments
  
  printf("%s\n", a); // print string

  return 0;
}