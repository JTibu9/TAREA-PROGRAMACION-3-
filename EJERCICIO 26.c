#include <stdio.h>

// Prototipo de función (retorna índice de alarma de mayor prioridad, -1 si no hay)
int highest_priority_alarm(int alarms[], int priorities[], int count);

// Test case en main()
int main() {
    int alarms1[] = {0, 1, 0, 1};        // alarmas activas en posición 1 y 3
    int priorities1[] = {1, 3, 2, 5};    // prioridades correspondientes
    
    int alarms2[] = {0, 0, 0, 0};        // sin alarmas
    int priorities2[] = {1, 2, 3, 4};
    
    int alarms3[] = {1, 1, 1, 0};        // alarmas en 0, 1, 2
    int priorities3[] = {8, 2, 5, 1};
    
    printf("Test 1: highest_priority_alarm(alarms1, priorities1, 4) = %d (esperado: 3)\n", 
           highest_priority_alarm(alarms1, priorities1, 4));
    printf("Test 2: highest_priority_alarm(alarms2, priorities2, 4) = %d (esperado: -1)\n", 
           highest_priority_alarm(alarms2, priorities2, 4));
    printf("Test 3: highest_priority_alarm(alarms3, priorities3, 4) = %d (esperado: 0)\n", 
           highest_priority_alarm(alarms3, priorities3, 4));
    return 0;
}

int highest_priority_alarm(int alarms[], int priorities[], int count)
{
    int max_priority = -1;
    int index = -1;
    
    for (int i = 0; i < count; i++) {
        if (alarms[i] == 1) { // Si la alarma está activa
            if (priorities[i] > max_priority) {
                max_priority = priorities[i];
                index = i;
            }
        }
    }
    
    return index;
}
