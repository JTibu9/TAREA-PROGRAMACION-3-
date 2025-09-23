#include <stdio.h>

// Prototipo de función (filtro: output = alpha * input + (1-alpha) * prev_output)
float low_pass_filter(float input, float previous_output, float alpha);

// Test case en main()
int main() {
    printf("Test 1: low_pass_filter(10.0, 5.0, 0.3) = %.2f (esperado: 6.50)\n", low_pass_filter(10.0, 5.0, 0.3));
    printf("Test 2: low_pass_filter(0.0, 10.0, 0.1) = %.2f (esperado: 9.00)\n", low_pass_filter(0.0, 10.0, 0.1));
    printf("Test 3: low_pass_filter(8.0, 2.0, 1.0) = %.2f (esperado: 8.00)\n", low_pass_filter(8.0, 2.0, 1.0));
    return 0;
}

float low_pass_filter(float input, float previous_output, float alpha)
{
    float output = alpha * input + (1-alpha)* previous_output;

    return output;

}
