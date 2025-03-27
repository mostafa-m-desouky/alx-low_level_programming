#include <stdio.h>

/*
 * find the length of String && Array
 *
 * Return: 0
 */

int main() {
	int i, n;
	int len = 0;
	char n1[7] = "mostafa";
	int arr[5] = {1, 8, 6, 4, 11};
	/* length of array */
	n = sizeof(arr) / sizeof(arr[0]);
	/* length of string */
	for (i = 0; n1[i] != '\0'; i++) {
		len++;
	}
}	
