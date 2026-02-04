#include <stdio.h>
int main(void)
{
  int scores[5] = {0};
  for (int i = 0; i < 5; i++)
  {
    printf("Give me a score: ");
    scanf("%d", &scores[i]);
  }
  printf("Your final array is: ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", scores[i]);
  }
}
