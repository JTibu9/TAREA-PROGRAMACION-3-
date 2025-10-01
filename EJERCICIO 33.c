#include <stdio.h>

// Prototipo de función (array con tiempos en ms entre flancos ascendentes)
float calculate_frequency(int pulse_times[], int count);

// Test case en main()
int main() {
    int times1[] = {100, 100, 100, 100};  // 100ms entre pulsos = 10Hz
    int times2[] = {50, 50, 50};          // 50ms entre pulsos = 20Hz  
    int times3[] = {200, 200};            // 200ms entre pulsos = 5Hz
    
    printf("Test 1: calculate_frequency(times1, 4) = %.2f (esperado: 10.00 Hz)\n", calculate_frequency(times1, 4));
    printf("Test 2: calculate_frequency(times2, 3) = %.2f (esperado: 20.00 Hz)\n", calculate_frequency(times2, 3));
    printf("Test 3: calculate_frequency(times3, 2) = %.2f (esperado: 5.00 Hz)\n", calculate_frequency(times3, 2));
    return 0;
}
float calculate_frequency(int pulse_times[], int count)
{
    int total_time_ms = 0;
    for (int i = 0; i < count; i++) {
        total_time_ms += pulse_times[i];
    }
    float frequency = 0.0;
    if (total_time_ms > 0) {
        frequency = 1000.0 / (total_time_ms / count);
    }
    return frequency;
}
