#include <stdio.h>

/**
 * Convert String From Upper case to Lower case
 * Return: 0
 */
int main() {
	int i;
	char str[30] = "MoStAfA";

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] = str[i] + 32;
		}
	}
	printf("%s", str);
}
