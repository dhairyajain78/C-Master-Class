#include <stdio.h>

#define CONVERSION_FACTOR 0.621371

int main() {
    double kmph, mph;

        printf("Enter speed in kilometers per hour (km/h): ");
    scanf("%lf", &kmph);
    mph = kmph * CONVERSION_FACTOR;

      printf("%.2f km/h is equal to %.2f mph\n", kmph, mph);

    return 0;
}

