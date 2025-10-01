#include <stdio.h>

// Prototipo de función (cuenta flancos de subida 0->1)
int count_rising_edges(int signal[], int length);

// Test case en main()
int main() {
    int test1[] = {0, 1, 1, 0, 1, 0, 1};
    int test2[] = {1, 1, 1, 1};
    int test3[] = {0, 1, 0, 1, 0, 1};
    
    printf("Test 1: count_rising_edges(test1, 7) = %d (esperado: 3)\n", count_rising_edges(test1, 7));
    printf("Test 2: count_rising_edges(test2, 4) = %d (esperado: 0)\n", count_rising_edges(test2, 4));
    printf("Test 3: count_rising_edges(test3, 6) = %d (esperado: 3)\n", count_rising_edges(test3, 6));
    return 0;
}

int count_rising_edges(int signal[], int length)
{
    int count = 0;
    for (int i = 1; i<length; i++)
    {
        if (signal[i-1]==0 && signal[i]==1)
        {
            count++;
        }
    }
    return count;
}
