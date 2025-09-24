#include <stdio.h>


// Prototipo de función
float calculate_power(float voltage, float current);

// Test case en main()
int main() {
    printf("Test 1: calculate_power(220.0, 5.2) = %.2f (esperado: 1144.00)\n", calculate_power(220.0, 5.2));
    printf("Test 2: calculate_power(12.0, 0.5) = %.2f (esperado: 6.00)\n", calculate_power(12.0, 0.5));
    printf("Test 3: calculate_power(0.0, 10.0) = %.2f (esperado: 0.00)\n", calculate_power(0.0, 10.0));
    return 0;
}

float calculate_power(float voltage, float current){
    
    voltage, current = voltage*current;
    
    return voltage, current;
}
