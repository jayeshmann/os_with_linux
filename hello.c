#include <stdio.h>

int main(int argc, char const *argv[])
{
  if (argc > 1)
  {
    printf("Hello %s!", argv[1]);
  }
  else
  {
    printf("Hello Nikita!");
  }

  printf("\n");
  return 0;
}
