#include <stdio.h>

int main() {
    int num, n, newNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the nth bit position (0-based indexing): ");
    scanf("%d", &n);
    newNum = num ^ (1 << n);
printf("bit toggled successfully\n\n");

    printf("Original number: %d\n", num);
    printf("New number after toggling the %dth bit: %d\n", n, newNum);

    return 0;
}
