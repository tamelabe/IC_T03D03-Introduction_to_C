#include <stdio.h>
#include <math.h>

double func(double x);

int main() {
    double x;
    if (scanf("%lf", &x)) {
    printf("%.1lf\n", func(x));
    } else { printf("n/a\n");
        }
    return 0;
}

double func(double x) {
    double ans, first, second, third;
    first = 7e-3 * pow(x, 4);
    second = ((22.8 * cbrt(x) - 1e3) * x + 3) / (x * x / 2);
    third = x * pow((10 + x), (2 / x));
    ans = first + second - third - 1.01;
    return ans;
}
