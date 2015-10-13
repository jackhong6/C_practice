#include <stdio.h>

int main (){
	int c, nwhite, nother, ndigits;
	c = nwhite = nother = ndigits = 0;

	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\t'){
			++nwhite;
		}
		else if (c >= '0' && c <= '9'){
			++ndigits;
		}
		else {
			++nother;
		}
	}
	
	printf("Frequency of Characters:\n");
	printf("nwhite  |");
	for (int i = 0; i < nwhite; ++i){
		putchar('O');
	}
	putchar('\n');

	printf("ndigits |");
	for (int i = 0; i < ndigits; ++i){
		putchar('O');
	}
	putchar('\n');

	printf("nother  |");
	for (int i = 0; i < nother; ++i){
		putchar('O');
	}
	putchar('\n');

}
