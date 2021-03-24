#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
  if (fork() == 0)
    printf("Hello from Child\n");
  else
  {
    printf("Hello from Parent\n");
    wait(NULL);
    printf("Child has terminated\n");
  }
  printf("Bye\n");
  return 0;
}
