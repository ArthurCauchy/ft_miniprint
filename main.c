# include "ft_libft.h"
# include "ft_miniprint.h"

int	main(void)
{
	int	sizes = {0, 1, 12, 59, 6, 589};
	int	i = 0;

	while (i < 6)
	{
		ft_miniprint("Size : %r0d\n", sizes[i]);
		++i;
	}
	return (0);
}
