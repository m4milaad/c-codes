#include <stdio.h>

int main()
{
  int n, r, s;

  printf("Enter the number of which you want the table, the starting point of the multiple, and the ending point of the multiple (separated by spaces): ");
  scanf("%d %d %d", &n, &s, &r);

  while (s <= r)
  {
    printf("%dx%d = %d\n", n, s, n * s);
    s++;
  }
  while (r <= s)
  {
    printf("%dx%d = %d\n", n, r, n * r);
    r++;
  }
  return 0;
}