#include <stdio.h>

int main() {
    float height, width, perimeter;
    
        printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
       perimeter = 2 * (height + width);
    
     printf("The perimeter of the rectangle is: %.2f\n", perimeter);
    
    return 0;
}
