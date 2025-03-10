#include <stdio.h>

int main() {
    int number, sum = 0;     printf("Enter integers (enter 0 to stop):\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number > 0) {
            sum += number;
        }
    } while (number != 0); 
    printf("The sum of all positive integers entered is: %d\n", sum);

    return 0;
}
