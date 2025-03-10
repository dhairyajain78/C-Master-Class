#include <stdio.h>

int main() {
    char forename_initial, surname_initial;
    int year_of_birth;

    // Input
    printf("Enter your forename initial: ");
    scanf(" %c", &forename_initial); // Read forename initial

    printf("Enter your surname initial: ");
    scanf(" %c", &surname_initial); // Read surname initial

    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth); // Read year of birth

    // Output
    printf("%c %c %d\n", forename_initial, surname_initial, year_of_birth);
    
    return 0;
}
