#include <stdio.h>
// Prototipo de función
float ramp_time(float initial_speed, float final_speed, float acceleration);

// Test case en main()
int main() {
    printf("Test 1: ramp_time(0.0, 100.0, 10.0) = %.2f (esperado: 10.00)\n", ramp_time(0.0, 100.0, 10.0));
    printf("Test 2: ramp_time(50.0, 20.0, 5.0) = %.2f (esperado: 6.00)\n", ramp_time(50.0, 20.0, 5.0));
    printf("Test 3: ramp_time(25.0, 25.0, 3.0) = %.2f (esperado: 0.00)\n", ramp_time(25.0, 25.0, 3.0));
    return 0;
}

float ramp_time(float initial_speed, float final_speed, float acceleration)
{   
    float tiempo = (final_speed - initial_speed) / (acceleration);
    return tiempo;
}
