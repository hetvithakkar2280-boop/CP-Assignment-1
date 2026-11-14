#include <stdio.h>

int main() {
    float dollars, rs, pounds;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;      // dollars -> Rs.
    pounds = rs / 70;       // Rs. -> pounds
    printf("$%.2f = %.2f pounds\n", dollars, pounds);
    return 0;
}
