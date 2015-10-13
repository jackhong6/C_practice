#include <stdio.h>
#define MAXLINE 100	/* maximum input line size */

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline2(line,MAXLINE)) > 0){
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)
		printf("Longest line is %d characters: %s",max,longest);

	return 0;
}

int getline2(char s[], int lim)
{
	int c, i, n;

	n = 0;
	for (i=0; (c=getchar()) != EOF && c!='\n'; ++i){
		if (i < lim-2){
			s[i] = c;
			++n;
		}
	}
	if (c == '\n'){
		s[n] = c;
		++n;
		++i;
	}	
	s[n] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
