#include "main.h"

/**
 * check_specifier - check that character is a valid specifier and
 * assigns an appropriate fucntion for its printing.
 * @format: the specifier (char*)
 *
 * Return: pointer to function, if successful
 * NULL pointer if not successful
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[6] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}
	}

	return (NULL);
}
