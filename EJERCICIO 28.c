#include <stdio.h>
#include <math.h>
// Prototipo de función (llena array con secuencia: [1,0,0,0], [0,1,0,0], [0,0,1,0], [0,0,0,1])
void stepper_sequence(int output[][4], int steps);

// Test case en main()
int main() {
    int sequence1[6][4];
    int sequence2[3][4];
    
    stepper_sequence(sequence1, 6);
    stepper_sequence(sequence2, 3);
    
    printf("Test 1 (6 pasos):\n");
    for(int i = 0; i < 6; i++) {
        printf("Paso %d: [%d,%d,%d,%d]\n", i, sequence1[i][0], sequence1[i][1], sequence1[i][2], sequence1[i][3]);
    }
    
    printf("\nTest 2 (3 pasos):\n");
    for(int i = 0; i < 3; i++) {
        printf("Paso %d: [%d,%d,%d,%d]\n", i, sequence2[i][0], sequence2[i][1], sequence2[i][2], sequence2[i][3]);
    }
    
    return 0;
}

void stepper_sequence(int output[][4], int steps)
{
    for (int i = 0; i <steps; i++)
    {
        if (i % 4 == 0)
        {
            output[i][0] = 1;
            output[i][1] = 0;
            output[i][2] = 0;
            output[i][3] = 0;
        }
        else if (i % 4 == 1)
        {
            output[i][0] = 0;
            output[i][1] = 1;
            output[i][2] = 0;
            output[i][3] = 0;
        }
        else if (i % 4 == 2)
        {
            output[i][0] = 0;
            output[i][1] = 0;
            output[i][2] = 1;
            output[i][3] = 0;
        }
        else // i % 4 == 3
        {
            output[i][0] = 0;
            output[i][1] = 0;
            output[i][2] = 0;
            output[i][3] = 1;
        }
    }
}
