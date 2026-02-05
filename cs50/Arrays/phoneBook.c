#include <stdio.h>
#include <string.h>
int main(void)
{
  char names[][20] = {"alice", "bob", "charlie", "david", "eve"};
  char numbers[][20] = {"123-456-7890", "234-567-8901", "345-678-9012", "456-789-0123", "567-890-1234"};
  char name[20] = "";
  printf("Name: ");
  scanf("%s", name);
  for (int i = 0; i < 5; i++)
  {
    if (strcmp(names[i], name) == 0)
    {
      printf("Found: %s\n", numbers[i]);
      return 0;
    }
  }
  printf("Not found!");
  return 1;
}