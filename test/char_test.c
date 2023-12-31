#include "../include/bfl.h"
#include <stdio.h>
#include <ctype.h>

int	ft_toupper_test(void)
{
	for (int i = -1; i < 1000000; i++)
		if (ft_toupper(i) != toupper(i))
			return (0);
	return (1);
}

int	ft_tolower_test(void)
{
	for (int i = -1; i < 1000000; i++)
		if (ft_tolower(i) != tolower(i))
			return (0);
	return (1);
}
