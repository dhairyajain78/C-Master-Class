#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}
int isArmstrong(int num) {
    int originalNum = num, sum = 0;
    int digits = countDigits(num);

    while (num > 0) {
        int digit = num % 10;
        sum += power(digit, digits);
        num /= 10;
    }

    return (sum == originalNum);
}
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int num;
        printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);
    if (isPerfect(num))
        printf("%d is a Perfect number.\n", num);
    else
        printf("%d is NOT a Perfect number.\n", num);

    return 0;
}
