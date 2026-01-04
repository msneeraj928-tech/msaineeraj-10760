#include <stdio.h>

int main() {
    int n, i, prime = 1;

    scanf("%d", &n);

    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    if (n <= 1)
        prime = 0;

    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
