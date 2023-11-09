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
	char *separator, str;
	int i = 0;
	va_list args;
	va_start(args, format);
	separator = "";
	while (format && format[i])
	{
		if (format[i] == 'c') {
			printf("%s%c", separator, va_arg(args, int));
		} 
		else if (format[i] == 'i') {
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[i] == 'f') {
			printf("%s%f", separator, (float)va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		separator = ", ";
		i++;
		if (format[i] == '\0')
		{
			printf("\n");
			break;
		}
	}
	va_end(args);
}
