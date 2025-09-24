#include <stdio.h>

// Prototipo de función
float find_max_sensor(float sensors[], int count);

// Test case en main()
int main() {
    float test1[] = {23.5, 28.1, 25.8, 31.2, 22.9};
    float test2[] = {-5.0, -10.0, -2.0, -15.0};
    float test3[] = {100.0};
    
    printf("Test 1: find_max_sensor(test1, 5) = %.2f (esperado: 31.20)\n", find_max_sensor(test1, 5));
    printf("Test 2: find_max_sensor(test2, 4) = %.2f (esperado: -2.00)\n", find_max_sensor(test2, 4));
    printf("Test 3: find_max_sensor(test3, 1) = %.2f (esperado: 100.00)\n", find_max_sensor(test3, 1));
    return 0;
}

float find_max_sensor(float sensors[], int count)
{   
    float valor_maximo = sensors[0];
    for (int i = 1; i < count; i++) {
        if (sensors[i] > valor_maximo) {
            valor_maximo = sensors[i];
        }
    }
    return valor_maximo;
}
