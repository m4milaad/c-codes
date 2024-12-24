#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, n_save, dig, c, rem, result = 0;
  printf("Enter any 3 digit number: ");
  scanf("%d", &n);

  n_save = n;

  for (dig = 0; n != 0; dig++)
  {
    n /= 10;
  }
  printf("%d\f", dig);
  n = n_save;

  while (n != 0)
  {
    rem = n % 10;
    n /= 10;
    c = 1;
    while (c <= dig)
    {
      result += rem;
      c++;
    }
  }
  if (n_save == result)
  {
    printf("%d is an armstrong number", n_save);
  }
  else
    printf("%d is not an armstrong number", n_save);

  return 0;
}