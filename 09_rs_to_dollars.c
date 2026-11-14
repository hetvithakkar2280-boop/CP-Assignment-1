#include <stdio.h>

int main() {
    float rs, dollars;
    printf("Enter amount in Rs.: ");
    scanf("%f", &rs);
    dollars = rs / 48;
    printf("Rs. %.2f = $%.2f\n", rs, dollars);
    return 0;
}
