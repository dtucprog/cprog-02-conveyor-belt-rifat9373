#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;

    // Ask the user for the number of motors
    printf("How many motors are carrying the packages? ");
    scanf("%d", &motorCount);

    // Ask the user for the total package weight
    printf("How many kg of packages do we expect? ");
    scanf("%d", &totalPackageWeight);

    // Calculate the total capacity of all motors
    int totalCapacity = motorCount * MOTOR_CAPACITY;

    // Check if the conveyor belt can carry the packages
    if (totalPackageWeight <= totalCapacity) {
        printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }

    return 0;
}
