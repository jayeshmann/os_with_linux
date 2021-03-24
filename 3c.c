#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int id;
  id = fork();
  if (id < 0)
  {
    printf("Child process is not created\n");
    exit(1);
  }
  else if (id == 0)
  {
    sleep(2);
    printf("This is child process\n");
  }
  else
  {
    printf("Parent process\n");
  }
  return 0;
}
