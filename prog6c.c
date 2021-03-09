#include <stdio.h>
#include <string.h>

struct fileTable
{
  char name[20];
  int nob, blocks[30];
} ft[30];

int main(int argc, char const *argv[])
{
  int i, j, n;
  char s[20];

  printf("\nEnter no. of files: ");
  fflush(0);
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\nEnter filename %d: ", i + 1);
    fflush(0);
    scanf("%s", ft[i].name);

    printf("\nEnter no. of blocks in file %d: ", i + 1);
    fflush(0);
    scanf("%d", &ft[i].nob);

    printf("\nEnter the blocks of the file: ");
    for (j = 0; j < ft[i].nob; j++)
    {
      fflush(0);
      scanf("%d", &ft[i].blocks[j]);
    }
  }

  printf("\nEnter the file name to be searched: ");
  fflush(0);
  scanf("%s", s);

  for (i = 0; i < n; i++)
  {
    if (strcmp(s, ft[i].name) == 0)
      break;
  }

  if (i == n)
    printf("\nFile not found.\n");
  else
  {
    printf("\nFile Name\tNo. of Blocks\tBlocks Occupied");
    printf("\n%s\t\t%d\t\t", ft[i].name, ft[i].nob);
    for (j = 0; j < ft[i].nob; j++)
    {
      printf("%d->", ft[i].blocks[j]);
    }
    printf("\n");
  }

  return 0;
}
