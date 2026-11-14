#include <stdio.h>

int main() {
    float l, area, perimeter;
    printf("Enter side of the square: ");
    scanf("%f", &l);
    area = l * l;
    perimeter = 4 * l;
    printf("Area      = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
