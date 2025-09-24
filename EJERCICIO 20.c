#include <stdio.h>


// Prototipo de función (secuencias válidas: 00->01->11->10->00)
int validate_encoder_sequence(int seq[], int length);

// Test case en main()
int main() {
    int valid1[] = {0, 0, 0, 1, 1, 1, 1, 0};      // 00->01->11->10
    int invalid1[] = {0, 0, 1, 1, 0, 0};           // salto inválido
    int valid2[] = {1, 0, 0, 0, 0, 1};             // 10->00->01
    
    printf("Test 1: validate_encoder_sequence(valid1, 8) = %d (esperado: 1)\n", validate_encoder_sequence(valid1, 8));
    printf("Test 2: validate_encoder_sequence(invalid1, 6) = %d (esperado: 0)\n", validate_encoder_sequence(invalid1, 6));
    printf("Test 3: validate_encoder_sequence(valid2, 6) = %d (esperado: 1)\n", validate_encoder_sequence(valid2, 6));
    return 0;
}

int validate_encoder_sequence(int seq[], int length)
{
    for (int i = 2; i < length; i += 2) {
        int prevA = seq[i-2];
        int prevB = seq[i-1];
        int currA = seq[i];
        int currB = seq[i+1];

        int bits = (prevA != currA) + (prevB != currB);

        if (bits != 1) {
            return 0;
        }
    }
    return 1; 
}    
