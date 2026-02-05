#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[20];
  char number[20];
} advancedPhoneBook;

int main(void)
{
  advancedPhoneBook phoneBook[] = {{"alice", "123-456-7890"}, {"bob", "234-567-8901"}, {"charlie", "345-678-9012"}, {"david", "456-789-0123"}, {"eve", "567-890-1234"}};

  int size = sizeof(phoneBook) / sizeof(phoneBook[0]);
  char name[20] = "";
  printf("Name: ");
  scanf("%s", name);
  for (int i = 0; i < size; i++)
  {
    if (strcmp(phoneBook[i].name, name) == 0)
    {
      printf("Found: %s\n", phoneBook[i].number);
      return 0;
    }
  }
  printf("Not found!\n");
  return 1;
}