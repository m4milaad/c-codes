#include <stdio.h>

int main() {
  int n, x, t;
  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &n, &x);
    int total_slices=n*x;
    int pizza_req=(total_slices+3)/4;
    printf("%d\n",pizza_req);
  }
  return 0;
}
