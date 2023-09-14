#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *ptr;
	unsigned int index;

	va_start(string, n);

	for (index = 0; index < n; index++)
	{
		ptr = va_arg(string, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}

