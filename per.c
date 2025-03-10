#include <stdio.h>

int main() {
    int roll_no, physics, chemistry, computer_app, total;
    char name[50];
    float percentage;
    char division[20];
        printf("Input the Roll Number of the student: ");
    scanf("%d", &roll_no);
    
    printf("Input the Name of the Student: ");
    scanf("%s", name);
    
    printf("Input the marks of Physics, Chemistry and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computer_app);
        total = physics + chemistry + computer_app;
    percentage = (total / 3.0);
    
    if (percentage >= 60) {
        sprintf(division, "First");
    } else if (percentage >= 50) {
        sprintf(division, "Second");
    } else if (percentage >= 40) {
        sprintf(division, "Third");
    } else {
        sprintf(division, "Fail");
    }
    
      printf("\nRoll No : %d\n", roll_no);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %d\n", physics);
    printf("Marks in Chemistry : %d\n", chemistry);
    printf("Marks in Computer Application : %d\n", computer_app);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);
    printf("Division = %s\n", division);
    
    return 0;
}
