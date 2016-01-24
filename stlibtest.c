#include "stdlib.h"
#include "stdio.h"

int main(int argc, char** argv)
{
  if (argc > 1)
  {
    printf("number: %d\n", atoi(argv[1]));
  }
}
