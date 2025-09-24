#include <stdio.h>

// Prototipo de función
float proportional_control(float setpoint, float current_position, float kp);

// Test case en main()
int main() {
    printf("Test 1: proportional_control(50.0, 40.0, 0.5) = %.2f (esperado: 5.00)\n", proportional_control(50.0, 40.0, 0.5));
    printf("Test 2: proportional_control(25.0, 30.0, 1.2) = %.2f (esperado: -6.00)\n", proportional_control(25.0, 30.0, 1.2));
    printf("Test 3: proportional_control(100.0, 100.0, 2.0) = %.2f (esperado: 0.00)\n", proportional_control(100.0, 100.0, 2.0));
    return 0;
}

float proportional_control(float setpoint, float current_position, float kp)
{
    float control = kp*(setpoint - current_position);

    return control;
}
