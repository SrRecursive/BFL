/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:32 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/03/24 14:53:44 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"
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
