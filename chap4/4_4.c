#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &a, &b, &c);
  printf("The reversal is: %1d%1d%1d\n", c, b, a);

  return 0;
}
