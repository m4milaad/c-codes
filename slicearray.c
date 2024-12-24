#include <stdio.h>
#include <string.h>
void slice(char str[], int start, int end);
int main()
{
    char string[100];
    int s, e;

    printf("Enter the string you want to slice: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    printf("The string is %s\n", string);
    printf("The length of the string is %ld\n", strlen(string));
    printf("Enter which part from and to you want to slice: ");
    scanf("%d %d", &s, &e);

    while (s < 0 || e > strlen(string) || s > e)
    {
        printf("The slicing input is not valid\n");
        printf("Please try again\n");
        printf("Enter which part from and to you want to slice: ");
        scanf("%d %d", &s, &e);
    }

    slice(string, s, e);
    printf("The sliced string is \"%s\"\n", string);
    return 0;
}
void slice(char str[], int start, int end)
{
    start--, end--;

    char sliced[100];
    int i, j;

    for (i = start, j = 0; i <= end; i++, j++)
    {
        sliced[j] = str[i];
    }
    sliced[j] = '\0';

    strcpy(str, sliced);
}