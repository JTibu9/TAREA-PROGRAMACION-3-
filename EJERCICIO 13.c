#include <stdio.h>
// Estados: 0=Rojo, 1=Amarillo, 2=Verde
// Prototipo de función
int next_traffic_state(int current_state);

// Test case en main()
int main() {
    printf("Test 1: next_traffic_state(0) = %d (esperado: 2)\n", next_traffic_state(0));  // Rojo -> Verde
    printf("Test 2: next_traffic_state(2) = %d (esperado: 1)\n", next_traffic_state(2));  // Verde -> Amarillo
    printf("Test 3: next_traffic_state(1) = %d (esperado: 0)\n", next_traffic_state(1));  // Amarillo -> Rojo
    return 0;
}

int next_traffic_state(int current_state)
{
    if (current_state == 0)
    {
 
        return 2;
    }
    else if (current_state == 2)
    {
        return 1;
    }
    else if (current_state == 1)
    {
        return 0;
    }
}
