// Prototipo de función
float celsius_to_kelvin(float celsius);

// Test case en main()
int main() {
    printf("Test 1: celsius_to_kelvin(25.5) = %.2f (esperado: 298.65)\n", celsius_to_kelvin(25.5));
    printf("Test 2: celsius_to_kelvin(0.0) = %.2f (esperado: 273.15)\n", celsius_to_kelvin(0.0));
    printf("Test 3: celsius_to_kelvin(-40.0) = %.2f (esperado: 233.15)\n", celsius_to_kelvin(-40.0));
    return 0;
}

float celsius_to_kelvin(float celsius){
    
    celsius= celsius+273.15;
    return celsius;
    
}
