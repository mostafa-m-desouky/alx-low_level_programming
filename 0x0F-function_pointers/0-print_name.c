#include "function_pointers.h"

/**
 *print_name - function pointer
 *@name:a char pointer name
 *@f:a function pointer takes a char pointer as an argument
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
