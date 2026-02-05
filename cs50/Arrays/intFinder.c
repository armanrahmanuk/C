#include <stdio.h>

int main(void)
{
  int numbers[] = {5, 100, 20, 10, 50, 1, 2};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int number = 0;
  printf("Number: ");
  scanf("%d", &number);
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] == number)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found!");
  return 1;
}