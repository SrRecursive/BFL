/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:32 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 10:22:10 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"
#include <stdio.h>
#include <ctype.h>

int	bfl_isalnum_test(void)
{
	for (int i = -394; i < 262; i++)
	{
		if (isalnum(i))
		{
			if (!bfl_isalnum(i))
				return (0);
		}
		else
		{
			if (bfl_isalnum(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_isalpha_test(void)
{
	for (int i = -394; i < 12618; i++)
	{
		if (isalpha(i))
		{
			if (!bfl_isalpha(i))
				return (0);
		}
		else
		{
			if (bfl_isalpha(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_isascii_test(void)
{
	for (int i = -10000000; i < 10000000; i++)
	{
		if (isascii(i))
		{
			if (!bfl_isascii(i))
				return (0);
		}
		else
		{
			if (bfl_isascii(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_isblank_test(void)
{
	for (int i = -574; i < 264; i++)
	{
		if (isblank(i))
		{
			if (!bfl_isblank(i))
				return (0);
		}
		else
		{
			if (bfl_isblank(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_isdigit_test(void)
{
	for (int i = -524; i < 13122; i++)
	{
		if (isdigit(i))
		{
			if (!bfl_isdigit(i))
				return (0);
		}
		else
		{
			if (bfl_isdigit(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_islower_test(void)
{
	for (int i = -394; i < 12334; i++)
	{
		if (islower(i))
		{
			if (!bfl_islower(i))
				return (0);
		}
		else
		{
			if (bfl_islower(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_isprint_test(void)
{
	for (int i = -386; i < 18620; i++)
	{
		if (isprint(i))
		{
			if (!bfl_isprint(i))
				return (0);
		}
		else
		{
			if (bfl_isprint(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_isupper_test(void)
{
	for (int i = -386; i < 12178; i++)
	{
		if (isupper(i))
		{
			if (!bfl_isupper(i))
				return (0);
		}
		else
		{
			if (bfl_isupper(i))
				return (0);
		}
	}
	return (1);
}

int	bfl_isxdigit_test(void)
{
	for (int i = -434; i < 65; i++)
	{
		if (isxdigit(i))
		{
			if (!bfl_isxdigit(i))
				return (0);
		}
		else
		{
			if (bfl_isxdigit(i))
				return (0);
		}
	}
	return (1);
}
