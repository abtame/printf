<<<<<<< HEAD
#include "holberton.h"
=======
#include "main.h"
>>>>>>> 98447f3f327cc1dc00922b8a677f9499a45a3eb8
/**
 * _printf - Print all this parameters
 * @format: input
 *
 * Description: function that prints output
 *
 * Return: The output character or num
 */
int _printf(const char *format, ...)
{
	int x = 0, o_p = 0;
	char *ptr = (char *) format, *output_p;
	int (*ptr_func)(va_list, char *, int);
	va_list vlist;

	if (!format)
		return (-1);
	va_start(vlist, format);
	output_p = malloc(sizeof(char) * SIZE);
	if (!output_p)
		return (1);
	while (format[x])
	{
		if (format[x] != '%')
			output_p[o_p] = format[x], o_p++;
		else if (s_trlen(ptr) != 1)
		{
			ptr_func = format_type(++ptr);
			if (!ptr_func)
				output_p[o_p] = format[x], o_p++;
			else
				o_p = ptr_func(vlist, output_p, o_p), x++;
		}
		else
			o_p = -1;
		x++, ptr++;
	}
	va_end(vlist);
	write(1, output_p, o_p);
	free(output_p);
<<<<<<< HEAD
	return (o_p);
}
=======
>>>>>>> 98447f3f327cc1dc00922b8a677f9499a45a3eb8