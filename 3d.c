#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
  fork();
  int a, b;
  printf("hello\n");
  a = getpid();
  b = getppid();
  if (getpid() == a)
  {
    sleep(3);
  }
  printf("waking up\n");
  return 0;
}
