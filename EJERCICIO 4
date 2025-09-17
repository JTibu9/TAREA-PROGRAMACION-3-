#include <stdio.h>
// Prototipo de función
int is_in_range(float value, float min_val, float max_val);

// Test case en main()
int main() {
    printf("Test 1: is_in_range(25.5, 0.0, 100.0) = %d (esperado: 1)\n", is_in_range(25.5, 0.0, 100.0));
    printf("Test 2: is_in_range(-5.0, 0.0, 100.0) = %d (esperado: 0)\n", is_in_range(-5.0, 0.0, 100.0));
    printf("Test 3: is_in_range(50.0, 25.0, 75.0) = %d (esperado: 1)\n", is_in_range(50.0, 25.0, 75.0));
    return 0;
}

int is_in_range(float value, float min_val, float max_val)
{   
    if (value>1 && min_val>=0 && max_val<=100){
        return 1;
    }
    else{
        return 0;
    }
}
