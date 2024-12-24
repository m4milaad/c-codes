#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n = 1, m;
  printf("Enter numbers until you want to print odd numbers: ");
  scanf("%d", &m);

  while (n <= m)
  {
    printf("%d\n", n); // Take input "N" from user and print odd numbers up to "N"
    n = n + 2;
  }

  return 0;
}
