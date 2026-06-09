#include <stdarg.h>
#include <stdio.h>

void print_two_numbers(int dummy, ...)
{
	va_list args;
	int		n;
	int		i;

	va_start(args, dummy);

	i = 0;
	while (i < 2)
	{
		n = va_arg(args, int);
		printf("%d\n", n);
		i++;
	}

	va_end(args);
}

int sum(int count, ...)
{
	va_list	args;
	int		i;
	int		num;
	int		sum;

	va_start(args, count);

	sum = 0;
	i = 0;
	while (i < count)
	{
		num = va_arg(args, int);
		sum += num;
		i++;
	}
	va_end(args);
	return (sum);
}

void print_person(char *format, ...)
{
	va_list	args;
	char *	formato;
	char *	nombre;
	int		edad;
	int		i;

	va_start(args, format);

	formato = format;
	i = 0;
	while (formato[i])
	{
		if (formato[i] == 's')
		{
			nombre = va_arg(args, char *);
			printf("%s\n", nombre);
		}
		if (formato[i] == 'i')
		{
			edad = va_arg(args, int);
			printf("%d\n", edad);
		}
		i++;
	}
	va_end(args);
}

void my_print(char *str, ...)
{
	va_list args;
	int		i;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				printf("%c", va_arg(args, int));
			else if (str[i] == 's')
				printf("%s", va_arg(args, char *));
			else if (str[i] == 'd')
				printf("%d", va_arg(args, int));
		}
		else
			printf("%c", str[i]);
		i++;
	}
	va_end(args);
}

int main(void)
{
	/* {
		print_two_numbers(0, 2, 3);
	}
	{
		int suma = sum(0);
		printf("%d\n", suma);
	}
	{
		print_person("si", "Matos", 22);
		print_person("is", 22, "Matos");
		print_person("ssi", "Diego", "Matos", 22);
	} */
	{
		my_print("Hola %s, tu %d letra es %c", "Matos", 24, 'A');
	}
	return (0);
}