#include <stdio.h>
/*Print the following sequence: 1 2 3 3 3 4 5 6 6 6 7 8 9 9 9 10*/
int main()
{
	int n, c = 1;
	printf("Enter the number: ");
	scanf("%d", &n);
	while (c <= n)
	{
		if (c % 3)
		{
			printf("%d\n", c);
		}
		else
		{
			printf("%d %d %d\n", c, c, c);
		}
		c++;
	}
	return 0;
}