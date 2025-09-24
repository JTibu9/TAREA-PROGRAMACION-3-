#include <stdio.h>
#include <math.h>

// Prototipo de función (calcula distancia desde origen)
float cartesian_to_distance(float x, float y);

// Test case en main()
int main() {
    printf("Test 1: cartesian_to_distance(3.0, 4.0) = %.2f (esperado: 5.00)\n", cartesian_to_distance(3.0, 4.0));
    printf("Test 2: cartesian_to_distance(0.0, 5.0) = %.2f (esperado: 5.00)\n", cartesian_to_distance(0.0, 5.0));
    printf("Test 3: cartesian_to_distance(-3.0, -4.0) = %.2f (esperado: 5.00)\n", cartesian_to_distance(-3.0, -4.0));
    return 0;
}
float cartesian_to_distance(float x, float y)
{
    float Conversion= sqrt((x*x)+(y*y));

    return Conversion;
}
