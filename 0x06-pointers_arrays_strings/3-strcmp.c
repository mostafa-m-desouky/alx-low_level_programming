#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: A pointer to a character that will be changed
 *@s2: A pointer to a character that will also be changed/modified/updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2) {
    int i, flag = 0;
    for(i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if(s1[i] != s2[i]) {
            flag = *s1 - *s2;
            break;
        }
    }
    return(flag);
}
