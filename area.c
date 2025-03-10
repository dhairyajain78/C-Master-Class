#include <stdio.h>

int main() {
    int choice;
    float base, height, radius, length, width, area;
    
    while (1) {
               printf("\nArea Calculator\n");
        printf("1. Area of Triangle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Circle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 4) {
            printf("Exiting the program.\n");
            break;
        }
                switch (choice) {
            case 1:
                printf("Enter base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of Triangle: %.2f\n", area);
                break;
            case 2:
                printf("Enter length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                area = length * width;
                printf("Area of Rectangle: %.2f\n", area);
                break;
            case 3:
                printf("Enter radius of the circle: ");
                scanf("%f", &radius);
                area = 3.14159 * radius * radius;
                printf("Area of Circle: %.2f\n", area);
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }
    
    return 0;
}
