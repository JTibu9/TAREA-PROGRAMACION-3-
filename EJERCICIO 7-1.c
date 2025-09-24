#include <stdio.h>

// Prototipo de función
float sensor_average(float readings[], int count);

// Test case en main()
int main() {
    float test1[] = {23.5, 24.1, 23.8, 24.2, 23.9};
    float test2[] = {100.0};
    float test3[] = {10.5, 15.3, 8.7, 12.1};
    
    printf("Test 1: sensor_average(test1, 5) = %.2f (esperado: 23.90)\n", sensor_average(test1, 5));
    printf("Test 2: sensor_average(test2, 1) = %.2f (esperado: 100.00)\n", sensor_average(test2, 1));
    printf("Test 3: sensor_average(test3, 4) = %.2f (esperado: 11.65)\n", sensor_average(test3, 4));
    return 0;
}
float sensor_average(float readings[], int count){

    float sum= 0.0;
    
    for (int i = 0; i < count; i++)
    {
        sum+= readings[i];
        
    }
    return sum/count;
}
