#include <stdio.h>
int main() {
    int n, a, sum = 0;
    printf("Enter value : ");
    scanf("%d", &n);
    a = 1;

    while (a <= n) {
        sum += a;
        ++a;
    }

    printf("Sum = %d", sum);
    return 0;
}
