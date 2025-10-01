#include <stdio.h>
// Prototipo de función (llena array de salidas: -1=enfriar, 0=off, 1=calentar)
void multi_zone_control(float temperatures[], float setpoints[], int outputs[], int zones);

// Test case en main()
int main() {
    float temps1[] = {18.5, 23.2, 26.8, 19.1};
    float setpoints1[] = {22.0, 24.0, 25.0, 20.0};
    int outputs1[4];
    
    float temps2[] = {22.0, 22.0};
    float setpoints2[] = {22.0, 22.0};
    int outputs2[2];
    
    multi_zone_control(temps1, setpoints1, outputs1, 4);
    multi_zone_control(temps2, setpoints2, outputs2, 2);
    
    printf("Test 1:\n");
    for(int i = 0; i < 4; i++) {
        printf("Zona %d: %.1f°C -> Setpoint %.1f°C = Acción %d\n", 
               i, temps1[i], setpoints1[i], outputs1[i]);
    }
    
    printf("\nTest 2:\n");
    for(int i = 0; i < 2; i++) {
        printf("Zona %d: %.1f°C -> Setpoint %.1f°C = Acción %d\n", 
               i, temps2[i], setpoints2[i], outputs2[i]);
    }
    
    return 0;
}
void multi_zone_control(float temperatures[], float setpoints[], int outputs[], int zones)
{  
    for(int i = 0; i < zones; i++)
    {
        if(temperatures[i] < setpoints[i] - 0.5)
            outputs[i] = 1; // Calentar
        else if(temperatures[i] > setpoints[i] + 0.5)
            outputs[i] = -1; // Enfriar
        else
            outputs[i] = 0; // Apagar
    }
}
