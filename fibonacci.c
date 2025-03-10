#include <stdio.h>

int main() {
    int first = 0, second = 1, next, count = 0;
        printf("First 10 Fibonacci numbers:\n");
    
    while (count < 10) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        count++;
    }
    
    printf("\n");
    return 0;
}
