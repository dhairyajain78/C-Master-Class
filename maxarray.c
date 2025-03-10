#include <stdio.h>

int main() {
    double sum = 0.0;   
    int count = 0;
    char choice;            
    printf("Calculate the average of a set of numbers:\n");
    
    do {
        double number;
        printf("Enter a number: ");
        scanf("%lf", &number);
                sum += number;
        count++;
                printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);      } while (choice == 'y' || choice == 'Y');
    
       if (count > 0) {
        double average = sum / count;
        printf("The average of the entered numbers is: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }
    
    return 0;
}
