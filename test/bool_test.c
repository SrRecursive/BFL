#include "../include/bfl.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum_test(void)
{
	for (int i = -394; i < 262; i++)
	{
		if (isalnum(i))
		{
			if (!ft_isalnum(i))
				return (0);
		}
		else
		{
			if (ft_isalnum(i))
				return (0);
		}
	}
	return (1);
}

int	ft_isalpha_test(void)
{
	for (int i = -394; i < 12618; i++)
	{
		if (isalpha(i))
		{
			if (!ft_isalpha(i))
				return (0);
		}
		else
		{
			if (ft_isalpha(i))
				return (0);
		}
	}
	return (1);
}

int	ft_isascii_test(void)
{
	for (int i = -10000000; i < 10000000; i++)
	{
		if (isascii(i))
		{
			if (!ft_isascii(i))
				return (0);
		}
		else
		{
			if (ft_isascii(i))
				return (0);
		}
	}
	return (1);
}

int	ft_isblank_test(void)
{
	for (int i = -574; i < 264; i++)
	{
		if (isblank(i))
		{
			if (!ft_isblank(i))
				return (0);
		}
		else
		{
			if (ft_isblank(i))
				return (0);
		}
	}
	return (1);
}

int	ft_isdigit_test(void)
{
	for (int i = -524; i < 13122; i++)
	{
		if (isdigit(i))
		{
			if (!ft_isdigit(i))
				return (0);
		}
		else
		{
			if (ft_isdigit(i))
				return (0);
		}
	}
	return (1);
}

int	ft_islower_test(void)
{
	for (int i = -394; i < 12334; i++)
	{
		if (islower(i))
		{
			if (!ft_islower(i))
				return (0);
		}
		else
		{
			if (ft_islower(i))
				return (0);
		}
	}
	return (1);
}

int	ft_isprint_test(void)
{
	for (int i = -386; i < 18620; i++)
	{
		if (isprint(i))
		{
			if (!ft_isprint(i))
				return (0);
		}
		else
		{
			if (ft_isprint(i))
				return (0);
		}
	}
	return (1);
}

int	ft_isupper_test(void)
{
	for (int i = -386; i < 12178; i++)
	{
		if (isupper(i))
		{
			if (!ft_isupper(i))
				return (0);
		}
		else
		{
			if (ft_isupper(i))
				return (0);
		}
	}
	return (1);
}

int	ft_isxdigit_test(void)
{
	for (int i = -434; i < 65; i++)
	{
		if (isxdigit(i))
		{
			if (!ft_isxdigit(i))
				return (0);
		}
		else
		{
			if (ft_isxdigit(i))
				return (0);
		}
	}
	return (1);
}

int	main(void)
{
	if (ft_isalnum_test())
		printf("ft_isalnum_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isalnum_test: \033[31mKO\033[0m\n");
		return (1);
	}
	if (ft_isalpha_test())
		printf("ft_isalpha_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isalpha_test: \033[31mKO\033[0m\n");
		return (2);
	}
	if (ft_isascii_test())
		printf("ft_isascii_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isascii_test: \033[31mKO\033[0m\n");
		return (3);
	}
	if (ft_isblank_test())
		printf("ft_isblank_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isblank_test: \033[31mKO\033[0m\n");
		return (4);
	}
	if (ft_isdigit_test())
		printf("ft_isdigit_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isdigit_test: \033[31mKO\033[0m\n");
		return (5);
	}
	if (ft_islower_test())
		printf("ft_islower_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_islower_test: \033[31mKO\033[0m\n");
		return (5);
	}
	if (ft_isprint_test())
		printf("ft_isprint_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isprint_test: \033[31mKO\033[0m\n");
		return (6);
	}
	if (ft_isupper_test())
		printf("ft_isupper_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isupper_test: \033[31mKO\033[0m\n");
		return (7);
	}
	if (ft_isxdigit_test())
		printf("ft_isxdigit_test: \033[32mOK\033[0m\n");
	else
	{
		printf("ft_isxdigit_test: \033[31mKO\033[0m\n");
		return (7);
	}
	return (0);
}
