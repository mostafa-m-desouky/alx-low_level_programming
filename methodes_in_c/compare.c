#include <stdio.h>

/*
 * Compare Two String
 *
 * Return: 0
 */

int main() {
    int i, flag;
    char n1[20] = "mostafa";
    char n2[20] = "magdy";

    for (i = 0; n1[i] != '\0' || n2[i] != '\0'; i++) {
        if (n1[i] != n2[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("Not The Same");
    } else {
        printf("The Same");
    }
}
