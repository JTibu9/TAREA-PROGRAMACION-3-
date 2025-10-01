#include <stdio.h>
// Prototipo de función
float linear_interpolation(float x, float x1, float y1, float x2, float y2);

// Test case en main()
int main() {
    printf("Test 1: linear_interpolation(5.0, 0.0, 0.0, 10.0, 100.0) = %.2f (esperado: 50.00)\n", 
           linear_interpolation(5.0, 0.0, 0.0, 10.0, 100.0));
    printf("Test 2: linear_interpolation(2.5, 2.0, 10.0, 3.0, 20.0) = %.2f (esperado: 15.00)\n", 
           linear_interpolation(2.5, 2.0, 10.0, 3.0, 20.0));
    printf("Test 3: linear_interpolation(7.0, 5.0, 25.0, 5.0, 25.0) = %.2f (esperado: 25.00)\n", 
           linear_interpolation(7.0, 5.0, 25.0, 5.0, 25.0));
    return 0;
}

float linear_interpolation(float x, float x1, float y1, float x2, float y2)
{
    if (x2 - x1 == 0) {
        return y1;
    }
    float formula = ((x - x1) * (y2 - y1)) / (x2 - x1) + y1;
    return formula;
}
