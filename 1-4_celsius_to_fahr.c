#include <stdio.h>

/* print Celsius-Fahrenheit table*/

float celsius_to_fahr(int);

int main(){
	float celsius, fahr;
	int lower = 0;
	int upper = 100;
	int step = 10;
	
	printf("Celsius Fahrenheit\n");
	celsius = lower;
	while (celsius <= upper) {
		printf("%7.0f %10.1f \n", celsius, celsius_to_fahr(celsius));
		celsius +=  step;
	}

	return 0;
}

float celsius_to_fahr(int celsius){
	return ((9.0 / 5.0) * celsius) + 32.0;

}
