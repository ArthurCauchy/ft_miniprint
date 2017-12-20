#include "ft_miniprint.c"

void	print_errortype(t_arg *arg, void *realarg)
{
	ft_putstr("(type error)");
}

void	print_integer(t_arg *arg, void *realarg)
{
	ft_putnbr((int*)realarg);
}

void	print_string(t_arg *arg, void *realarg)
{
	ft_putstr((char*)realarg);
}
