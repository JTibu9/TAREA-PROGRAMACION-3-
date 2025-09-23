#include <stdio.h>

// Prototipo de función
int map_value(int input, int in_min, int in_max, int out_min, int out_max);

// Test case en main()
int main() {
    printf("Test 1: map_value(512, 0, 1023, 0, 255) = %d (esperado: 127)\n", map_value(512, 0, 1023, 0, 255));
    printf("Test 2: map_value(1023, 0, 1023, 0, 255) = %d (esperado: 255)\n", map_value(1023, 0, 1023, 0, 255));
    printf("Test 3: map_value(0, 0, 1023, 50, 200) = %d (esperado: 50)\n", map_value(0, 0, 1023, 50, 200));
    return 0;
}
int map_value(int input, int in_min, int in_max, int out_min, int out_max)
{
    // Fórmula de mapeo
    int formula = (input - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
    return formula; 
}
