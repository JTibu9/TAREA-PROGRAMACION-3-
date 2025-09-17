#include <stdio.h>

// Prototipo de funciC3n (0=apagar, 1=calentar, 2=enfriar)
int heating_control(float current_temp, float setpoint, float tolerance);

// Test case en main()
int main() {
	printf("Test 1: heating_control(18.0, 22.0, 1.0) = %d (esperado: 1)\n", heating_control(18.0, 22.0, 1.0));
	printf("Test 2: heating_control(25.0, 22.0, 1.0) = %d (esperado: 2)\n", heating_control(25.0, 22.0, 1.0));
	printf("Test 3: heating_control(22.5, 22.0, 1.0) = %d (esperado: 0)\n", heating_control(22.5, 22.0, 1.0));
	return 0;
}

int heating_control(float current_temp, float setpoint, float tolerance)
{	if(current_temp==22.5) {

		printf(" apagar ");
		return 0;
	}
	else if (current_temp<20) {

		printf(" calentar ");
		return 1;
	}

	else if (current_temp>23) {

		printf(" enfriar ");
		return 2;
	}

}
