#include <stdio.h>

int is_prime(int x);

int main(void)
{
    int n;
    int i;
    int count = 0;

    scanf("%d", &n);

    if (n > 10000) {
        printf("NG\n");
    } else {
        for (i = 1; i <= n; i++) {
            if (is_prime(i) == 1) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

int is_prime(int x)
{
    int i;

    if (x < 2) {
        return 0;
    }

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

