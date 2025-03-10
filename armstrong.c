#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Function to compute power manually
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0, remainder;
    
    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += power(remainder, digits);
        originalNum /= 10;
    }
    
    return (sum == num);
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
    
       if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
        if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
   
    if (isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }
    
    return 0;
}
