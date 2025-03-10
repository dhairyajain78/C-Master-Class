#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
double sumOfSeries(int terms) {
    double sum = 0;
    for (int i = 1; i <= terms; i++) {
        sum += (double) factorial(i) / i;      }
    return sum;
}

int main() {
    int n = 5;     double result = sumOfSeries(n);
    printf("The sum of the series is: %.2lf\n", result);

    return 0;
}
