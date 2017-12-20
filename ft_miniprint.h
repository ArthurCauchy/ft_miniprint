#ifndef FT_MINIPRINT_H
# define FT_MINIPRINT_H

# include <stdarg.h>
# include "libft.h"

/*
** Represents an argument of miniprint.
** ex : %l4d%
**
** alignleft : yes = 1, no = 0
** width : width of the collumn. 0 = auto
** print_fct : the fct that must be called to print the arg
*/

typedef struct	s_arg
{
	int							alignleft;
	int							width;
	functionpointer	*print_fct;
}								t_arg;

void	ft_miniprint(char *str, ...);

#endif
