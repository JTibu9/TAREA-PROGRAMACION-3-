#include <stdio.h>
#include <math.h>

// Prototipo de función (1/Req = 1/R1 + 1/R2 + ... + 1/Rn)
float parallel_resistance(float resistors[], int count);

// Test case en main()
int main() {
    float test1[] = {100.0, 200.0};               // 1/Req = 1/100 + 1/200 = 0.015, Req = 66.67
    float test2[] = {10.0, 10.0, 10.0};           // 1/Req = 0.3, Req = 3.33
    float test3[] = {50.0};                        // Req = 50.0
    
    printf("Test 1: parallel_resistance(test1, 2) = %.2f (esperado: 66.67)\n", parallel_resistance(test1, 2));
    printf("Test 2: parallel_resistance(test2, 3) = %.2f (esperado: 3.33)\n", parallel_resistance(test2, 3));
    printf("Test 3: parallel_resistance(test3, 1) = %.2f (esperado: 50.00)\n", parallel_resistance(test3, 1));
    return 0;
}

float parallel_resistance(float resistors[], int count)
{
    float total = 0.0;
    for (int i = 0; i < count; i++)
    {
        float paralelo = 1/resistors[i];
        total += paralelo;
    }
    return 1/total;
}
