#include <stdio.h> 
#include <math.h>

// Prototipo de función
int decode_4bit(int bit3, int bit2, int bit1, int bit0);

// Test case en main()
int main() {
    printf("Test 1: decode_4bit(1, 0, 1, 0) = %d (esperado: 10)\n", decode_4bit(1, 0, 1, 0));
    printf("Test 2: decode_4bit(1, 1, 1, 1) = %d (esperado: 15)\n", decode_4bit(1, 1, 1, 1));
    printf("Test 3: decode_4bit(0, 0, 0, 1) = %d (esperado: 1)\n", decode_4bit(0, 0, 0, 1));
    return 0;
}

int decode_4bit(int bit3, int bit2, int bit1, int bit0)
{
    int conversion = bit3*pow(2,3)+bit2*pow(2,2)+bit1*pow(2,1)+bit0*pow(2,0);
    return conversion;
}
