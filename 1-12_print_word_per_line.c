#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c;
	int state = OUT;
	while ((c = getchar()) != EOF){
			if (c != ' ' && c != '\n' && c != '\t'){
				putchar(c);	
			}
			else {
				printf("\n");
				while ((c = getchar()) == ' ' || c == '\n' || c == '\t'){
					;
				}
				putchar(c);
			}
	}
}
