#include "ft_miniprint.h"

static functionpointer	*get_print_fct()
{
	if (c == 'd')
		return (&print_integer);
	else if (c == 's')
		return (&print_string);
	else
		return (&print_errortype);
}

static t_arg						*detect_arg(char *str)
{
	t_arg	*arg;
	int		i;

	if (!(arg = (t_arg*)malloc(sizeof(t_arg))))
		return (NULL);
	arg->alignleft = (str[1] == 'l') ? 1 : 0;
	arg->width = ft_atoi(str + 2);
	i = 2;
	while (isdigit(str[i]))
		++i;
	arg->print_fct = get_print_fct(char given_type);
	return (arg);
}

/*
** Kind of mini printf func. Handle column formatting
** and left-align. Can be used with numbers and strings.
*/

void											ft_miniprint(char *str, ...)
{
	va_list	ap;
	t_arg		*arg;

	va_start(ap, str);
	arg = NULL;
	while (*str)
	{
		if (*str == '%')
		{
			if (*(str + 1) == '%')
				ft_putchar('%');
			else
			{
				arg->print_arg(arg, va_arg(ap, void*));
				free(arg);
			}
			while (*str && *str != '%')
				++str;
		}
		else
			ft_putchar(*str);
		++str;
	}
	va_end(ap);
}
