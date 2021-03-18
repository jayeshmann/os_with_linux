/** C program
  * File Allocation
  * Sequential
  * Copyright (c) 2021 Jayesh Mann
  **/

#include <stdio.h>
#include <string.h>

struct fileTable
{
  char name[20];
  int sb, nob;
} ft[30];

int main(int argc, char const *argv[])
{
  int i, j, n;
  char s[20];
  printf("Enter no. of files: ");
  fflush(0);
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\nEnter file name %d: ", i + 1);
    fflush(0);
    scanf("%s", ft[i].name);

    printf("\nEnter starting block of file %d: ", i + 1);
    fflush(0);
    scanf("%d", &ft[i].sb);

    printf("\nEnter no. of blocks in file %d: ", i + 1);
    fflush(0);
    scanf("%d", &ft[i].nob);
  }

  printf("\nEnter the file name to be searched: ");
  fflush(0);
  scanf("%s", s);

  for (i = 0; i < n; i++)
    if (strcmp(s, ft[i].name) == 0)
      break;
  if (i == n)
    printf("\nFile not found.");
  else
  {
    printf("\nFile Name\tStart Block\tNo. of Blocks\tBlocks Occupied");
    printf("\n%s\t\t%d\t\t%d\t\t", ft[i].name, ft[i].sb, ft[i].nob);

    for (j = 0; j < ft[i].nob; j++)
      printf("%d, ", ft[i].sb + j);
    printf("\n");
  }
  printf("\n");

  return 0;
}
