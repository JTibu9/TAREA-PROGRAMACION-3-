#include <stdio.h>
// Prototipo de función (encuentra mediana de 3 valores consecutivos)
void median_filter(float input[], float output[], int length);

// Test case en main()
int main() {
    float input1[] = {1.0, 10.0, 2.0, 3.0, 15.0, 4.0, 5.0};  // con picos en pos 1 y 4
    float output1[7];
    float input2[] = {5.0, 5.1, 4.9, 5.0};
    float output2[4];
    
    median_filter(input1, output1, 7);
    median_filter(input2, output2, 4);
    
    printf("Test 1 - Filtrado con picos:\n");
    printf("Input : "); for(int i=0; i<7; i++) printf("%.1f ", input1[i]); printf("\n");
    printf("Output: "); for(int i=0; i<7; i++) printf("%.1f ", output1[i]); printf("\n");
    
    printf("\nTest 2 - Señal estable:\n");
    printf("Input : "); for(int i=0; i<4; i++) printf("%.1f ", input2[i]); printf("\n");
    printf("Output: "); for(int i=0; i<4; i++) printf("%.1f ", output2[i]); printf("\n");
    
    return 0;
}
void median_filter(float input[], float output[], int length)
{
    float n = 0.0;
    for (int i = 0; i<length; i++)
    {
        float mediana= input[i]+1.0; // Valor por defecto (si no hay vecinos)
        if (i>0 && i<length-1) // Si no es el primer o último elemento
        {
            float a = input[i-1];
            float b = input[i];
            float c = input[i+1];
            // Encontrar mediana de a, b, c
            if ((a <= b && b <= c) || (c <= b && b <= a))
                mediana = b;
            else if ((b <= a && a <= c) || (c <= a && a <= b))
                mediana = a;
            else
                mediana = c;
        }
        output[i] = mediana;
    }
}
