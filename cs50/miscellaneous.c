#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  char name[20] = "";
  printf("Give a word to make it uppercase: ");
  scanf("%s", name);
  printf("Before: %s\n", name);
  printf("After:  ");
  for (int i = 0, n = strlen(name); i < n; i++)
  {
    printf("%c", toupper(name[i]));
  }
  printf("\n");
}