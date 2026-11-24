#include <stdio.h>

int main() {
    int n;
    long long a[10000], b[10000], c[10000], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lld %lld", &a[i], &b[i]);

    c[0] = a[0] + b[0] - 8;
    for (int i = 1; i < n; i++)
        c[i] = c[i - 1] + a[i] + b[i] - 8;

    for (int i = 0; i < n; i++)
        sum += c[i];

    printf("%lld\n", sum);
    return 0;
}