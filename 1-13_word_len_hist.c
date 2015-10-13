#include <stdio.h>
#define MAX_LENGTH 12	/*If a word is longer than MAX_LENGTH, then add one to lengths_hist[MAX_LENGTH]*/
#define HIST_MARKER 'O'

/*Exercise 1-13 Prints a histogram of the lengths of words in its input.*/

int main() {
		int count, c;
		int lengths_hist[MAX_LENGTH + 1];	/*words of length count stored in lengths_hist[count - 1]*/

		for (int i = 0; i < MAX_LENGTH + 1; ++i){
			lengths_hist[i] = 0;
		}
		count = 0;

		while ((c = getchar()) != EOF) {
			if (c != ' ' && c != '\n' && c != '\t') {
				++count;
			}
			else {
				if (count <= MAX_LENGTH) {
					++lengths_hist[count - 1];
				}
				else {
					++lengths_hist[MAX_LENGTH];
				}
				while ((c = getchar()) == ' ' || c == '\t' || c == '\n'){
					;
				}
				count = 1;
			}
		}

		printf("Word Length Frequencies\n");

		for (int i = 0; i < MAX_LENGTH; ++i){
			printf("%3d | ", i + 1);
			for (int j = 0; j < lengths_hist[i]; ++j){
					printf("%c", HIST_MARKER);
			}
			printf("\n");
		}

		printf("12+ | ");
		for (int j = 0; j < lengths_hist[MAX_LENGTH]; ++j){
			printf("%c", HIST_MARKER);
		}
		printf("\n");
}
