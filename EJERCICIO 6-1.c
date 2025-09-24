#include <stdio.h>

int count_pulses(int signals[], int size);

// Test case en main()
int main() 
{
    int test1[] = {0, 1, 0, 1, 0, 1, 0};
    int test2[] = {1, 1, 1, 1, 1};
    int test3[] = {0, 0, 0, 0};
    
    printf("Test 1: count_pulses(test1, 7) = %d (esperado: 3)\n", count_pulses(test1, 7));
    printf("Test 2: count_pulses(test2, 5) = %d (esperado: 5)\n", count_pulses(test2, 5));
    printf("Test 3: count_pulses(test3, 4) = %d (esperado: 0)\n", count_pulses(test3, 4));
    return 0;
}

int count_pulses(int signals[], int size)
{
    int contador=0;
    for (int i = 0; i < size; i++){
        if (signals[i]==1){
            contador++;
        }

    }
    return contador;
}
