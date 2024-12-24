#include <stdio.h>

int main()
{
	int emp, n = 1;
	char name;
	while (n <= 5)
	{
		printf("Enter employee number and name: ");
		scanf("%d %c", &emp, &name);
		printf("%d %c\n", emp, name);
		n++;
	}
	return 0;
}
