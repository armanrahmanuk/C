#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[20] = "";
  int times = 0;
  printf("Give a word to print: ");
  scanf("%s", name);
  printf("How many times?: ");
  scanf("%d", &times);
  for (int i = 0; i < times; i++)
  {
    printf("%s\n", name);
  }
}
