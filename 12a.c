// Producer-Consumer problem

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int buffer[10], bufsize = 10, in = 0, out = 0, produce, consume, ch = 0;

  while (ch != 3)
  {
    printf("\n");
    printf("\n1. Produce\n2. Consume\n3. Exit");
    printf("\nEnter your choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      if ((in + 1) % bufsize == out)
        printf("\nBuffer is full!\n");
      else
      {
        printf("\nEnter the value:");
        scanf("%d", &produce);
        buffer[in] = produce;
        in = (in + 1) % bufsize;
      }
      break;
    case 2:
      if (in == out)
        printf("\nBuffer is empty!\n");
      else
      {
        consume = buffer[out];
        printf("\nThe consumed value is %d", consume);

        out = (out + 1) % bufsize;
      }
      break;
    }
  }
  return 0;
}
