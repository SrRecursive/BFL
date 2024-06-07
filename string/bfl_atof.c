/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl_atof.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 00:19:30 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/08 01:15:29 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

static void	skip_spaces(const char **str)
{
	while (**str == '\n' || **str == '\t' || **str == '\v' || **str == ' '
		|| **str == '\f' || **str == '\r')
		(*str)++;
}

static void	handle_sign(const char **str, int *sign)
{
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			*sign *= -1;
		(*str)++;
	}
}

double	calculate_fractional_part(const char *str)
{
	double	fractional_number;
	int		length;

	fractional_number = 0;
	length = 1;
	while (*str >= '0' && *str <= '9')
	{
		fractional_number = fractional_number * 10.0f + *str - '0';
		str++;
		length *= 10;
	}
	return (fractional_number / length);
}

double	bfl_atof(const char *str)
{
	int		sign;
	double	number;

	if (!str)
		return (0);
	skip_spaces(&str);
	sign = 1;
	handle_sign(&str, &sign);
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	if (*str == '.')
	{
		str++;
		number += calculate_fractional_part(str);
	}
	return (number * sign);
}
