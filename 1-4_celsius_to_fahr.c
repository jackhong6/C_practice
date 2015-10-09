#include <stdio.h>

/* print Celsius-Fahrenheit table*/

int main(){
		float celsius, fahr;
		int lower = 0;
		int upper = 100;
		int step = 10;
		
		printf("Celsius Fahrenheit\n");
		celsius = lower;
		while (celsius <= upper) {
				fahr = ((9.0 / 5.0) * celsius) + 32.0;
				printf("%7.0f %6.1f \n", celsius, fahr);
				celsius +=  step;
		}
}
