#include <stdio.h>
// Prototipo de función (1=acceso permitido, 0=denegado)
int access_control(int card_valid, int fingerprint_ok, int door_closed, int emergency_stop);

// Test case en main()
int main() {
    printf("Test 1: access_control(1, 1, 1, 0) = %d (esperado: 1)\n", access_control(1, 1, 1, 0));  // Todo OK
    printf("Test 2: access_control(1, 0, 1, 0) = %d (esperado: 0)\n", access_control(1, 0, 1, 0));  // Sin huella
    printf("Test 3: access_control(1, 1, 0, 0) = %d (esperado: 0)\n", access_control(1, 1, 0, 1));  // Emergencia
    printf("Test 4: access_control(0, 1, 1, 0) = %d (esperado: 0)\n", access_control(0, 1, 1, 0));  // Sin tarjeta
    return 0;
}

int access_control(int card_valid, int fingerprint_ok, int door_closed, int emergency_stop)
{
    if (card_valid && fingerprint_ok && !emergency_stop) {
        return 1; // Acceso permitido
    }
    else if (emergency_stop) {
        return 0; // Emergencia, acceso denegado
    }
    else {
        return 0; // Cualquier otro caso, acceso denegado
    }
}
