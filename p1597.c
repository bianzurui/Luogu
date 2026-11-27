#include <stdio.h>
int main() {
    char s[300];
    int a = 0, b = 0, c = 0;   // 三个变量初始都是 0
    int i, v;
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++) {
        // 每条语句的格式是 x:=y; 遇到冒号才处理
        if (s[i] == ':') {
            // 先算出右边的值 v
            if (s[i + 2] == 'a') {
                v = a;
            } else if (s[i + 2] == 'b') {
                v = b;
            } else if (s[i + 2] == 'c') {
                v = c;
            } else {
                v = s[i + 2] - '0';   // 字符 '3' 变成数字 3
            }
            // 再把 v 赋给冒号前面的变量
            if (s[i - 1] == 'a') {
                a = v;
            } else if (s[i - 1] == 'b') {
                b = v;
            } else {
                c = v;
            }
        }
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}