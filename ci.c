#include <stdio.h>

int main() {
    double principal, rate, time, compoundInterest, amount;
    char choice; 
    printf("Compound Interest Calculator\n");

    do {
                printf("Enter the principal amount: ");
        scanf("%lf", &principal);

        printf("Enter the annual interest rate (in percentage): ");
        scanf("%lf", &rate);

        printf("Enter the time period (in years): ");
        scanf("%lf", &time);
        amount = principal;
        for (int i = 0; i < (int)time; i++) {
            amount += amount * (rate / 100);
        }
        
                compoundInterest = amount - principal;

                printf("The compound interest is: %.2f\n", compoundInterest);

                printf("Do you want to calculate compound interest for another set of values? (y/n): ");
        scanf(" %c", &choice); 
    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for using the Compound Interest Calculator. Goodbye!\n");
    return 0;
}
