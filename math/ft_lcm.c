/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lcm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:40:16 by ribana-b          #+#    #+# MALAGA      */
/*   Updated: 2024/02/17 11:06:33 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "bfl.h"

unsigned long	ft_lcm(size_t number1, size_t number2)
{
	if (number1 == 0 && number2 == 0)
		return (0);
	return (number1 * number2 / ft_gcd(number1, number2));
}
