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
	va_list args;
	int i = 0;
	char *s;
	char c;
	int separator = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (separator == 1)
		{
			printf(", ");
			separator = 0;
		}
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				separator = 1;
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				separator = 1;
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
