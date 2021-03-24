#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  printf("PID of example.c = %d\n", getpid());
  pid_t p;
  p = fork();
  if (p == -1)
  {
    printf("\nThere is an error while calling fork()");
  }
  if (p == 0)
  {
    printf("\nWe are in the child process");
    printf("\nCalling hello.c from child process");
    char *args[] = {"Hello", "C", "Programming", NULL};
    execv("./hello", args);
  }
  else
  {
    printf("\nWe are in the parent process");
  }
  printf("\n");
  return 0;
}
