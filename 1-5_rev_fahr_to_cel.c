#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main(){
		printf("Fahrenheit Celsius\n");
		for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP){
				printf("%10d %7.1f\n" , fahr , (5.0/9.0) * (fahr - 32));
		}
}
