#include <stdio.h>

float calculateFare(float distance) {
    float ratePerKm = 50.0;
    return distance * ratePerKm;
}

int main() {
    float distance = 10.0;
    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}