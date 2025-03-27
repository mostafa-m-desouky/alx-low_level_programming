#include <stdio.h>
#include <string.h>

/*
 * Reverse a String
 * Return: 0
 */

int main() {
	char ch;
	int i, l = 0;
	char n1[30] = "mostafa";

	l = strlen(n1);

	for (i = 0; i < l/2; i++) {
		ch = n1[i];
		n1[i] = n1[l - 1 - i];
		n1[l - 1 - i] = ch;
	}
	printf("%s", n1);
}
