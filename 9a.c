//Program 9a: Single Level Directory Organization
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct
{
  char dname[10], fname[10][10];
  int fcnt;
} dir;

int main(int argc, char const *argv[])
{
  int i, ch;
  char f[30];
  dir.fcnt = 0;

  printf("\nEnter name of directory: ");
  scanf("%s", dir.dname);

  while (1)
  {
    printf("\n\n1. Create a File");
    printf("\n2. Delete a File");
    printf("\n3. Search a File");
    printf("\n4. Display");
    printf("\n5. Exit");
    printf("\n>> ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      printf("\n");
      printf("Enter the name of the file: ");
      scanf("%s", dir.fname[dir.fcnt]);
      dir.fcnt++;
      break;

    case 2:
      printf("\n");
      printf("Enter the name of the file: ");
      scanf("%s", f);
      for (i = 0; i < dir.fcnt; i++)
      {
        if (strcmp(f, dir.fname[i]) == 0)
        {
          printf("\n");
          printf("File %s is deleted.", f);
          strcpy(dir.fname[i], dir.fname[dir.fcnt - 1]);
          break;
        }
      }
      if (i == dir.fcnt)
      {
        printf("\n");
        printf("File %s not found.", f);
      }
      else
        dir.fcnt--;
      break;

    case 3:
      printf("\n");
      printf("Enter the name of the file: ");
      scanf("%s", f);
      for (i = 0; i < dir.fcnt; i++)
      {
        if (strcmp(f, dir.fname[i]) == 0)
        {
          printf("\n");
          printf("File %s is found.", f);
          break;
        }
      }
      if (i == dir.fcnt)
      {
        printf("\n");
        printf("File %s not found.", f);
      }
      break;

    case 4:
      if (dir.fcnt == 0)
      {
        printf("\n");
        printf("Directory Empty.");
      }
      else
      {
        printf("\n");
        printf("The Files are: ");
        for (i = 0; i < dir.fcnt; i++)
        {
          printf("\n%s", dir.fname[i]);
        }
      }
      printf("\n");
      break;
    default:
      exit(0);
    }
  }

  return 0;
}
