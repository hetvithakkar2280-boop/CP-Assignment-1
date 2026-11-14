#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;
    printf("Enter size in bytes: ");
    scanf("%lf", &bytes);
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    printf("Bytes = %.0f\n", bytes);
    printf("KB    = %.6f\n", kb);
    printf("MB    = %.6f\n", mb);
    printf("GB    = %.9f\n", gb);
    return 0;
}
