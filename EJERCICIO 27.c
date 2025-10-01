#include <stdio.h>
#include <math.h>

// Prototipo de función (retorna 0 si está en zona muerta, sino retorna error)
float deadband_control(float setpoint, float current_position, float deadband);

// Test case en main()
int main() {
    printf("Test 1: deadband_control(100.0, 99.5, 1.0) = %.2f (esperado: 0.00)\n", deadband_control(100.0, 99.5, 1.0));
    printf("Test 2: deadband_control(50.0, 48.0, 1.5) = %.2f (esperado: 2.00)\n", deadband_control(50.0, 48.0, 1.5));
    printf("Test 3: deadband_control(25.0, 27.0, 1.0) = %.2f (esperado: -2.00)\n", deadband_control(25.0, 27.0, 1.0));
    return 0;
}
float deadband_control(float setpoint, float current_position, float deadband)
{
    float error = setpoint - current_position;
    if (fabs(error) < deadband) {
        return 0.0;  // Dentro de la zona muerta
    }
    return error;
}
