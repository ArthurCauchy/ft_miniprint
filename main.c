# include "libft.h"

int	main(void)
{
	int			sizes[] = {0, 1, 12, -59, -6, 589};
	const char	*strs[] = {"", "a", "ab", "iwjoerweiorneiwor", "kqwd", "aadwe"};
	int			i = 0;

	while (i < 6)
	{
		ft_miniprint("Size : |%l5d%|%l10s%|test\n", sizes[i], strs[i]);
		++i;
	}
	return (0);
}
