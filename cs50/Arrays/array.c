#include <stdio.h>

int main(void)
{

  int numbers[] = {6, 7, 8, 9, 90, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
  int count = sizeof(numbers) / sizeof(numbers[0]);

  for (int i = 0; i < count; i++)
  {
    printf("%d ", numbers[i]);
  }
}