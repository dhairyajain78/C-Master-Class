#include <stdio.h>

int main() {
    int customer_id, units;
    char name[50];
    float charge_per_unit, total_bill;
    
    // Input
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    
    printf("Enter Customer Name: ");
    scanf("%s", name);
    
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    
    // Determine charge per unit
    if (units <= 199) {
        charge_per_unit = 1.20;
    } else if (units >= 200 && units < 400) {
        charge_per_unit = 1.50;
    } else if (units >= 400 && units < 600) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }
    
    // Calculate total bill
    total_bill = units * charge_per_unit;
    
    // Apply surcharge if bill exceeds Rs. 400
    if (total_bill > 400) {
        total_bill += total_bill * 0.15;
    }
    
    // Ensure minimum bill is Rs. 100
    if (total_bill < 100) {
        total_bill = 100;
    }
    
    // Output
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: Rs. %.2f\n", total_bill);
    
    return 0;
}
