#include <stdio.h>
#include <string.h>
int main(void)
{
  char strings[][20] = {"pen", "book", "note", "pencil", "rubber", "laptop"};

  int size = sizeof(strings) / sizeof(strings[0]);
  char string[20] = "";
  printf("String: ");
  scanf("%s", string);
  for (int i = 0; i < size; i++)
  {
    if (strcmp(strings[i], string) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found!");
  return 1;
}