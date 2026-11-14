#include <stdio.h>

int main() {
    float dollars, rs;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;
    printf("$%.2f = Rs. %.2f\n", dollars, rs);
    return 0;
}
