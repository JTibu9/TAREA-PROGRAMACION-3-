//CODIGO DE RPM A VELOCIDAD ANGULAR:

#include <stdio.h>


// Prototipo de función
float rpm_to_rad_per_sec(int rpm);

// Test case en main()
int main() {
    printf("Test 1: rpm_to_rad_per_sec(1500) = %.2f (esperado: 157.08)\n", rpm_to_rad_per_sec(1500));
    printf("Test 2: rpm_to_rad_per_sec(0) = %.2f (esperado: 0.00)\n", rpm_to_rad_per_sec(0));
    printf("Test 3: rpm_to_rad_per_sec(3000) = %.2f (esperado: 314.16)\n", rpm_to_rad_per_sec(3000));
    return 0;
}

float rpm_to_rad_per_sec(int rpm){
    rpm = rpm*(2*3.14)/(60);
    return rpm;
}
