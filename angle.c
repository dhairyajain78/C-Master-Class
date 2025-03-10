#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
        printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
        if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        printf("The given angles form a valid triangle.\n");
    } else {
        printf("The given angles do not form a valid triangle.\n");
    }
    
    return 0;
}
