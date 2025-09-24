#include <stdio.h>

// Prototipo de función
int detect_overload(float currents[], int size, float limit, int min_violations);

// Test case en main()
int main() {
    float test1[] = {2.1, 2.3, 3.8, 4.1, 3.9, 2.0};  // límite 3.5A
    float test2[] = {1.0, 1.2, 1.1, 1.3};
    float test3[] = {4.0, 4.1, 3.0, 4.2, 4.3};
    
    printf("Test 1: detect_overload(test1, 6, 3.5, 2) = %d (esperado: 1)\n", detect_overload(test1, 6, 3.5, 2));
    printf("Test 2: detect_overload(test2, 4, 3.5, 2) = %d (esperado: 0)\n", detect_overload(test2, 4, 3.5, 2));
    printf("Test 3: detect_overload(test3, 5, 3.5, 3) = %d (esperado: 1)\n", detect_overload(test3, 5, 3.5, 3));
    return 0;
}
int detect_overload(float currents[], int size, float limit, int min_violations)
{
    limit = 3.5;
    for(int i = 0; i < size; i++)
    {
        if(currents[i]>limit)
        {
            min_violations++;
            if(min_violations >= 2)
            {
                return 1;
            }
        }
    }
    return 0;
}
