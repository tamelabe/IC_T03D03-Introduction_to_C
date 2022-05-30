#include <stdio.h>

void check_n(double x, double y);

int main() {
    double x, y, k;
    char ch1, ch2;
    k = scanf("%lf%c%lf%c", &x, &ch1, &y, &ch2);
    if (k == 4 && (ch1 == ' ' || ch1 == '\n') && ch2 == '\n') {
    check_n(x, y);
    } else { printf("n/a\n");
        }
    return 0;
    }

void check_n(double x, double y) {
    if ((x*x + y*y) < 25) {
        printf("GOTCHA\n");
    } else {
        printf("MISS\n");
        }
}
