#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  int pid;
  pid = fork();
  if (pid < 0)
  {
    printf("Process is not created\n");
    exit(1);
  }
  else if (pid == 0)
  {
    printf("Child process is created\n");
    exit(0);
  }
  else
  {
    printf("Parent process\n");
  }
  return 0;
}

