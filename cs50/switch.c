#include <stdio.h>
#include <math.h>
int main(void)
{
  double num1 = 0.0;
  double num2 = 0.0;
  char operator = '\0';
  printf("Give a number: ");
  scanf("%lf", &num1);
  do
  {
    printf("Which operation do you wanna use (+ - * /): ");
    scanf(" %c", &operator);
  } while (operator != '+' && operator != '-' && operator != '*' && operator != '/');

  printf("Give the 2nd number: ");
  scanf("%lf", &num2);

  double result = 0.0;
  {
    switch (operator)
    {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;

    default:
      break;
    }
  }
  printf("The result is: %.2lf\n", result);
}