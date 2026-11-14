#include <stdio.h>

int main() {
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    allowance = gross * 10 / 100;   // 10% of gross
    deduction = gross * 3 / 100;    // 3% of gross
    net = gross + allowance - deduction;
    printf("Allowance  = %.2f\n", allowance);
    printf("Deduction  = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", net);
    return 0;
}
