#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * format: Is  list of types of arguments.
*/

void print_all(const char * const format, ...)
{
	int a = 0;
	char *str = NULL;
	char *separator;

	va_list print_args;

	va_start(print_args, format);

	while (format && format[a])
	{
		switch (*(print_args + a))
		{
			case 'c':
				printf("%s%d", separator, va_arg(print_args, int));
				break;

			case 'i':
				printf("%s%d", separator, va_arg(print_args, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(print_args, double));
				break;
			
			case 's':
				str = va_arg(print_args, char *);

				if (str == NULL)
					str = "(nil)";

				printf("%s%s", separator, str);

			default:
				a++;
				continue;
		}
		separator = COM;
		a++;

	}
	printf("\n");
	va_end(print_args);
}
