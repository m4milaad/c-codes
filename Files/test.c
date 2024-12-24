#include <stdio.h>

void main()
{
  FILE *fptr;
  fptr = fopen("test.txt", "a");
  char ch[100];
  int roll;
  float cgpa;

  printf("Enter the name, roll number, CGPA (seperated by space): ");
  scanf("%s %d %f", ch, &roll, &cgpa);

  fprintf(fptr, "%s %5d %5.2f\n", ch, roll, cgpa);
  fclose(fptr);
}