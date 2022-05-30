#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int a, b, k;
    char c1, c2;
    k = scanf("%d%c%d%c", &a, &c1, &b, &c2);
    if (k == 4 && (c1 == ' ' || c1 == '\n') && c2 == '\n') {
        printf("%d %d %d ", sum(a, b), sub(a, b), mul(a, b));
        if (b) {
            printf("%d\n", div(a, b));
        } else {
            printf("n/a\n");
        }
    } else {
        printf("n/a\n");
    }
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}


