#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
        printf("Enter the number of terms: ");
    scanf("%d", &n);
        printf("Harmonic series up to %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i < n) {
            printf(" + ");
        }
        sum += 1.0 / i;
    }
        printf("\nSum of harmonic series: %.6lf\n", sum);
    
    return 0;
}
