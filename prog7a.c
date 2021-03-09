//MFT Memory management technique

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int ms, bs, nob, ef, n, mp[10], tif = 0;
  int i, p = 0;

  printf("Enter the total memory available (in Bytes): ");
  fflush(0);
  scanf("%d", &ms);

  printf("Enter the block size (in Bytes): ");
  fflush(0);
  scanf("%d", &bs);

  nob = ms / bs;
  ef = ms - nob * bs;

  printf("\nEnter the no. of processes: ");
  fflush(0);
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter memory required for process %d (in Bytes): ", i + 1);
    fflush(0);
    scanf("%d", &mp[i]);
  }

  printf("\nNo. of Blocks available in memory: %d", nob);
  printf("\n\nProcess\t\tMemory Required\tAllocated\tInternal Fragmentation");
  for (i = 0; i < n; i++)
  {
    printf("\n%d\t\t%d", i + 1, mp[i]);
    if (mp[i] > bs)
    {
      printf("\t\tNO\t\t---");
    }
    else
    {
      printf("\t\tYES\t\t%d", bs - mp[i]);
      tif = tif + bs - mp[i];
      p++;
    }
  }

  if (i < n)
  {
    printf("\n\nMemory is Full, Remaining processes cannot be accomodated.");
  }

  printf("\nTotal Internal Fragmentation is: %d", tif);
  printf("\nTotal External Fragmentation is: %d\n", ef);

  return 0;
}
