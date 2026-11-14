#include <stdio.h>
int main() {
    int n, i, j, k;
    double a[10000], hp = 10;
    long long b[10000], sum = 0, tmp = 0, s, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%lf %lld", &a[i], &b[i]);
    for (i = 0; i < n; i++) {
        if (hp - a[i] <= 0)
            break;
        hp -= a[i];
        if (hp > 10)
            hp = 10;
        sum += b[i];
    }
    for (j = 0; ; j++) {
        s = 1;
        for (k = 0; k < j; k++)
            s *= 2;       
        tmp += s;          
        if (tmp > sum) {
            c = sum - tmp + s;
            break;
        }
    }
    printf("%d %lld\n", j, c);
    return 0;
}