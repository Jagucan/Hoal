#include "variadic_functions.h"

/**
 * 
 * 
 * 
*/

void print_char(va_list c)
{
	printf("%s", va_arg(c, char));
}

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

void print_str(va_list s)
{
	char *str;
	str = va_arg(s, char *);

	if(str == NULL)
		str = "(nil)";
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	print_a types_args[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_list print_args;
	unsigned int a = 0, i = 0;
	char *separator;

	va_start(print_args, format);

	while (format && format[a])
	{
		while (types_args[i].t != NULL)
		{
			if(*(types_args[i].t) == format[a])
			{
				printf("%s", separator);
				types_args[i].f(print_args);
				separator = ", ";
				break;
			}
			i++;
		}
		a++;
	}
	printf("\n");
	va_end(print_args);
}