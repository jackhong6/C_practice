#include <stdio.h>

/* print Farenheit-Celsius table*/

int main(){
		float celsius, fahr;
		int lower = 0;
		int upper = 300;
		int step = 20;
		
		printf("Fahrenheit Celsius\n");
		fahr = lower;
		while (fahr <= upper) {
				celsius = (5.0 / 9.0) * (fahr - 32.0);
				printf("%10.0f %6.1f \n", fahr,celsius);
				fahr = fahr + step;
		}
}
