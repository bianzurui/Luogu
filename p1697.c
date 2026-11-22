#include <stdio.h>
int main() {
    int n, s[100], e[100], best = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &s[i], &e[i]);
    for (int r = 0; r < n; r++) {        
        int cov[1000] = {0};               
        for (int i = 0; i < n; i++) {
            if (i == r) continue;
            for (int t = s[i]; t < e[i]; t++)
                cov[t] = 1;
        }
        int len = 0;
        for (int t = 0; t < 1000; t++)
            len += cov[t];
        if (len > best)
            best = len;
    }
    printf("%d\n", best);
    return 0;
}