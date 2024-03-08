/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:22:56 by ribana-b          #+#    #+# MALAGA      */
/*   Updated: 2024/02/17 10:47:01 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "bfl.h"

double	ft_pow(double number, int exponent)
{
	double	temp;

	temp = number;
	if (exponent == 0)
		return (1);
	else if (exponent > 0)
		while (exponent-- > 1)
			number *= temp;
	else
	{
		while (exponent++ < -1)
			number *= temp;
		number = 1 / number;
	}
	return (number);
}
