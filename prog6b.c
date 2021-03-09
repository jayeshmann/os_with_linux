#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct fileTable
{
  char name[20];
  int nob;
  struct block *sb;
} ft[30];

struct block
{
  int bno;
  struct block *next;
};

int main(int argc, char const *argv[])
{
  int i, j, n;
  char s[20];
  struct block *temp;

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
    ft[i].sb = (struct block *)malloc(sizeof(struct block));
    temp = ft[i].sb;

    printf("\nEnter the blocks of the file: ");
    fflush(0);
    scanf("%d", &temp->bno);
    temp->next = NULL;

    for (j = 0; j < ft[i].nob; j++)
    {
      temp->next = (struct block *)malloc(sizeof(struct block));
      temp = temp->next;
      fflush(0);
      scanf("%d", &temp->bno);
    }
    temp->next = NULL;
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
    temp = ft[i].sb;
    for (j = 0; j < ft[i].nob; j++)
    {
      printf("%d->", temp->bno);
      temp = temp->next;
    }
    printf("\n");
  }

  return 0;
}
