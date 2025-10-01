#include <stdio.h>

// Prototipo de función (velocidad 0-100%)
int fan_speed_control(float temperature);

// Test case en main()
int main() {
    printf("Test 1: fan_speed_control(20.0) = %d (esperado: 0)\n", fan_speed_control(20.0));    // temp < 25: off
    printf("Test 2: fan_speed_control(30.0) = %d (esperado: 25)\n", fan_speed_control(30.0));   // temp 25-35: 25%
    printf("Test 3: fan_speed_control(45.0) = %d (esperado: 75)\n", fan_speed_control(45.0));   // temp 35-50: 75%
    printf("Test 4: fan_speed_control(60.0) = %d (esperado: 100)\n", fan_speed_control(60.0));  // temp >50: 100%
    return 0;
}

int fan_speed_control(float temperature)
{
    if (temperature < 25.0) {
        return 0; // Ventilador apagado
    } else if (temperature <= 35.0) {
        return 25; // 25% de velocidad
    } else if (temperature <= 50.0) {
        return 75; // 75% de velocidad
    } else {
        return 100; // 100% de velocidad
    }

}
