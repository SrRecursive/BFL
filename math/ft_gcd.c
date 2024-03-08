/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 09:36:51 by ribana-b          #+#    #+# MALAGA      */
/*   Updated: 2024/02/17 09:57:57 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "bfl.h"

size_t	ft_gcd(size_t number1, size_t number2)
{
	size_t	temp;

	while (number2 != 0)
	{
		temp = number1;
		number1 = number2;
		number2 = temp % number2;
	}
	return (number1);
}
