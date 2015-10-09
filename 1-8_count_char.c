#include <stdio.h>

int main() {
		int blanks, tabs, newlines, c;
		blanks = 0;
		tabs = 0;
		newlines = 0;

		while ((c = getchar()) != EOF){
			if (c == ' ') 
					++blanks;
			else if (c == '\t')
					++tabs;
			else if (c == '\n')
					++newlines;
		}

		printf(" blanks: %d \n tabs: %d \n newlines: %d \n", blanks, tabs, newlines);
}
