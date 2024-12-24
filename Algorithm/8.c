#include <stdio.h>

int main()
{
	int emp, n = 1, ba, da, sal;
	char name;
	while (n <= 5)
	{
		printf("Enter employee number, name, ba, da: ");
		scanf("%d %c %d %d", &emp, &name, &ba, &da);
		sal = ba + da;
		printf("%d %c's salary is %d\n", emp, name, sal);
		n++;
	}
	return 0;
}