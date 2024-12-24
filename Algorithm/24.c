#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, r, x;
  printf("Enter the number and the power: ");
  scanf("%d %d", &n, &r);

  x = n;

  while (r > 1)
  {
    x = x * n;
    r--;
  }

  printf("%d", x);

  return 0;
}
