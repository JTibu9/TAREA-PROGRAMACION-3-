#include <stdio.h>
// Prototipo de función (retorna máscara de bits: bit 0=actuador1, bit 1=actuador2, etc.)
int actuator_control(int priorities[], int states[], int count, int max_active);

// Test case en main()
int main() {
    int prio1[] = {3, 1, 4, 2};    // prioridades (mayor número = mayor prioridad)
    int state1[] = {1, 1, 1, 0};   // estados solicitados (1=activar, 0=desactivar)
    
    int prio2[] = {5, 2, 8, 1};
    int state2[] = {1, 1, 1, 1};
    
    printf("Test 1: actuator_control(prio1, state1, 4, 2) = %d (esperado: 10)\n", actuator_control(prio1, state1, 4, 2));  // bits 0 y 2
    printf("Test 2: actuator_control(prio2, state2, 4, 3) = %d (esperado: 14)\n", actuator_control(prio2, state2, 4, 3)); // bits 1, 2 y 3
    return 0;
}

#include <stdio.h>

int actuator_control(int priorities[], int states[], int count, int max_active) {
    int mask = 0;

    while (max_active > 0) {
        int best = -1;
        int best_prio = -1;

        // Buscar el solicitado con mayor prioridad
        for (int i = 0; i < count; i++) {
            if (states[i] == 1 && priorities[i] > best_prio) {
                best_prio = priorities[i];
                best = i;
            }
        }

        if (best == -1) break; // ya no quedan solicitados

        // Activar este actuador en la máscara
        mask |= (1 << best+1);

        // Marcarlo como usado
        states[best] = 0;
        max_active--;
    }

    return mask;
}
