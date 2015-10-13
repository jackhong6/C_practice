#include <stdio.h>

/* print Farenheit-Celsius table*/

float fahr_to_celsius(float);

int main(){
	float celsius, fahr;
	int lower = 0;
	int upper = 300;
	int step = 20;
	
	printf("Fahrenheit Celsius\n");
	fahr = lower;
	while (fahr <= upper) {
		printf("%10.0f %6.1f \n", fahr, fahr_to_celsius(fahr));
		fahr = fahr + step;
	}
}

float fahr_to_celsius(float fahr){
	return (5.0 / 9.0) * (fahr - 32.0);
}
