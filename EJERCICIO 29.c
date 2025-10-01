#include <stdio.h>
// Estructura para dispositivo
typedef struct {
    float power_watts;
    float hours_on;
} Device;

// Prototipo de función (retorna kWh total)
float total_energy_consumption(Device devices[], int count);

// Test case en main()
int main() {
    Device test1[] = {{1000.0, 8.0}, {500.0, 12.0}, {200.0, 24.0}};  // Motor, Bomba, Control
    Device test2[] = {{750.0, 4.0}};                                   // Un solo motor
    Device test3[] = {{100.0, 2.0}, {150.0, 6.0}, {300.0, 1.0}};    // Varios pequeños
    
    printf("Test 1: total_energy_consumption(test1, 3) = %.2f (esperado: 18.80 kWh)\n", total_energy_consumption(test1, 3));
    printf("Test 2: total_energy_consumption(test2, 1) = %.2f (esperado: 3.00 kWh)\n", total_energy_consumption(test2, 1));
    printf("Test 3: total_energy_consumption(test3, 3) = %.2f (esperado: 1.40 kWh)\n", total_energy_consumption(test3, 3));
    return 0;
}

float total_energy_consumption(Device devices[], int count)
{
    float total_kwh = 0.0;
    for(int i = 0; i <count; i++)
    {
        total_kwh += (devices[i].power_watts * devices[i].hours_on) / 1000.0; // Convertir a kWh
    }
    return total_kwh;
}
