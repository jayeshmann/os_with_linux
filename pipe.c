#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
  int pipefd[2], pid, n, rc, nr, status;
  char *testString = "Hello, world!\n", buf[1024];
  rc = pipe(pipefd);
  if (rc < 0)
  {
    perror("pipe");
    exit(1);
  }
  pid = fork();
  if (pid < 0)
  {
    perror("fork");
    exit(1);
  }
  if (pid == 0)
  {
    close(pipefd[0]);
    write(pipefd[1], testString, strlen(testString));
    close(pipefd[1]);
    exit(0);
  }
  close(pipefd[1]);
  n = strlen(testString);
  nr = read(pipefd[0], buf, n);
  rc = write(1, buf, nr);
  wait(&status);
  printf("Good work child!\n");
  return (0);
}
