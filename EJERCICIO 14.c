#include <stdio.h>
// Prototipo de función
float motor_efficiency(float power_output, float power_input);

// Test case en main()
int main() {
    printf("Test 1: motor_efficiency(750.0, 1000.0) = %.2f (esperado: 75.00)\n", motor_efficiency(750.0, 1000.0));
    printf("Test 2: motor_efficiency(450.0, 500.0) = %.2f (esperado: 90.00)\n", motor_efficiency(450.0, 500.0));
    printf("Test 3: motor_efficiency(0.0, 100.0) = %.2f (esperado: 0.00)\n", motor_efficiency(0.0, 100.0));
    return 0;
}
float motor_efficiency(float power_output, float power_input) 
{
    float porcentaje = (power_output / power_input) * 100;
    return porcentaje;
}
