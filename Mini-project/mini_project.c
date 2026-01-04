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

    if (n <= 1) {
        prime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
