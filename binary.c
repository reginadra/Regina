#include<stdio.h>

struct Person
{
  char name[40];
  int  age;
};

void read()
{
  struct Person ps[2];
	
  FILE *fi = fopen("1.bin", "rb");
	
  fread(ps, sizeof(struct Person), 2, fi);
	
  printf("%s ...... %d\n", ps[0].name, ps[0].age);
  printf("%s ...... %d\n", ps[1].name, ps[1].age);
	
  fclose(fi);
}

void write()
{
  struct Person ps[] = { {"Оля", 25}, {"Катя", 35} };

  FILE *fo = fopen("1.bin", "wb");

  fwrite(ps, sizeof(struct Person), 2, fo);
  // fwrite(ps, sizeof(ps), 1, fo); // Isn't it enough to have one fwrite() function?

  fclose(fo);
}

int main(int argc, char *argv[])
{
  switch(argv[1][0])
  {
    case 'w':
      puts("w");
      write();
      break;
    case 'r':
      puts("r");
      read();
      break;
    default:
      puts("Error in command line");
  }

  return 0;
}
