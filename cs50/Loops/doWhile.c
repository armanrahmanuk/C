#include <stdio.h>
void meow(int times);

int main(void)
{
  int n = 0;
  do
  {
    printf("How many times?: ");
    scanf("%d", &n);
  } while (n <= 0);

  // you can do it using while loop also
  // while (n <= 0)
  // {
  //   printf("How many times?: ");
  //   scanf("%d", &n);
  // }

  meow(n);
}

void meow(int times)
{
  for (int i = 0; i < times; i++)
  {
    printf("meow\n");
  }
}