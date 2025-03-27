#include <stdio.h>
#include <string.h>

/*
 * Concatenate two String
 * Return: 0
 */
int main() {
	int i, len1, len2;
	char n1[30] = "mostafa";
	char n2[6] = "magdy";

	len1 = strlen(n1);
	len2 = strlen(n2);
	
	for (i = 0; i <= len2; i++) {
		n1[len1 + i] = n2[i];
	}
	printf("%s\n", n1);
}
