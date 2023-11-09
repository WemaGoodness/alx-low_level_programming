#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - printa anything
 * 
 * Return: always a success
 */
void print_all(const char * const format, ...)
{
	const char *ptr;
	int i = 0;
	va_list args;
	va_start(args, format);

	ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == 'c') {
			printf("%c", va_arg(args, int));
		} else if (*ptr == 'i') {
			printf("%d", va_arg(args, int));
		} else if (*ptr == 'f') {
			printf("%f", (float)va_arg(args, double));
		} else if (*ptr == 's') {
			char *s = va_arg(args, char *);
			if (s == NULL) {
				printf("(nil)");
			} else {
				printf("%s", s);
			}
		}

		if (*(ptr + 1) != '\0' && (i > 0)) {
			printf(", ");
		}

		ptr++;
		i++;
	}

	va_end(args);
	printf("\n");
}
