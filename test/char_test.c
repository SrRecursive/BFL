/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:47:35 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/03/22 15:47:36 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "bfl.h"
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
