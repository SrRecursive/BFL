/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl_strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 00:18:03 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/08 00:18:19 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

int	bfl_strcmp(const char *str, const char *str2)
{
	int	index;

	if (!str || !str2)
		return (-1);
	index = 0;
	while (str[index] || str2[index])
	{
		if (str[index] != str2[index])
			return ((unsigned char)str[index] - (unsigned char)str2[index]);
		index++;
	}
	return (0);
}
