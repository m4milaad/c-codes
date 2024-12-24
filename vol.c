#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l, b, h; // I took 3 variables for length, bredth and height
    printf("Enter the length of the cube: ");
    scanf("%d", &l); // This takes the value of length from user and stores
    printf("Enter the bredth of the cube: ");
    scanf("%d", &b); // This takes the value of bredth from user
    printf("Enter the height of the cube: ");
    scanf("%d", &h);     // This takes the value of height from user
    int vol = l * b * h; // This computes the Volume of the cube
    printf("The fuckin volume of cube is %d mate", vol);
    return 0;
}