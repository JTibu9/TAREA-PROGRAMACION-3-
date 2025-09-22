#include <stdio.h>


// Prototipo de función (llena array con 0s y 1s según duty_cycle)
void generate_pwm(int output[], int size, int duty_cycle);

// Test case en main()
int main() {
    int pwm1[10], pwm2[10], pwm3[4];
    // Generar señales PWM con diferentes ciclos de trabajo

    generate_pwm(pwm1, 10, 50);  // 50% duty cycle
    generate_pwm(pwm2, 10, 25);  // 25% duty cycle  
    generate_pwm(pwm3, 4, 75);   // 75% duty cycle
    
    printf("Test 1 (50%% duty): ");
    for(int i = 0; i < 10; i++) printf("%d ", pwm1[i]);
    printf("\n");
    
    printf("Test 2 (25%% duty): ");
    for(int i = 0; i < 10; i++) printf("%d ", pwm2[i]);
    printf("\n");
    
    printf("Test 3 (75%% duty): ");
    for(int i = 0; i < 4; i++) printf("%d ", pwm3[i]);
    printf("\n");
    
    return 0;
}

void generate_pwm(int output[], int size, int duty_cycle){
    int porcentaje = size * duty_cycle / 100;
    for (int i = 0; i<size; i++)
    {   if (i < porcentaje) // Llenar con 1s hasta porcentaje
            output[i]= 1;
            else 
            output[i]= 0; // Rellenar con 0s el resto

    }
}
