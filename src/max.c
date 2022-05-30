#include <stdio.h>

int max(int a, int b);

int main() {
    int a, b, k;
    char c1, c2;
    k = scanf("%d%c%d%c", &a, &c1, &b, &c2);
    if (k == 4 && (c1 == ' ' || c1 == '\n') && c2 == '\n') {
        printf("%d\n", max(a, b));
    } else {
        printf("n/a\n");
    }
    return 0;
}

int max(int a, int b) {
    int x = a;
    if (b > a)
            x = b;
    return x;
}



