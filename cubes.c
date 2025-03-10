#include <stdio.h>

int main() {
    int n;
        printf("Enter an integer: ");
    scanf("%d", &n);
        printf("Cubes of numbers up to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }
    
    return 0;
}
