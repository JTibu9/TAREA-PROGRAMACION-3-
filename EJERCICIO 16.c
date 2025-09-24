int hysteresis_control(float input, float setpoint, float hysteresis, int previous_state);

// Test case en main()
int main() {
    printf("Test 1: hysteresis_control(22.0, 25.0, 2.0, 0) = %d (esperado: 1)\n", hysteresis_control(22.0, 25.0, 2.0, 0));
    printf("Test 2: hysteresis_control(26.0, 25.0, 2.0, 1) = %d (esperado: 1)\n", hysteresis_control(26.0, 25.0, 2.0, 1));
    printf("Test 3: hysteresis_control(28.0, 25.0, 2.0, 1) = %d (esperado: 0)\n", hysteresis_control(28.0, 25.0, 2.0, 1));
    return 0;
}
int hysteresis_control(float input, float setpoint, float hysteresis, int previous_state)
{
    // Lógica de control con histéresis
    if (input < setpoint)
    {
        return 1;
    }
    // Si la entrada supera el punto de ajuste más la histéresis, apagar
    else if (input > setpoint + hysteresis)
    {
        return 0;
    }
    // Mantener el estado anterior si está dentro del rango de histéresis
    else
    {
        return previous_state;
    }
}
