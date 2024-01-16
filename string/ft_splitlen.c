/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:19:07 by ribana-b          #+#    #+#             */
/*   Updated: 2024/01/16 17:36:27 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

size_t	ft_splitlen(char **split)
{
	size_t	counter;

	if (!split)
		return (0);
	counter = 0;
	while (split[counter])
		counter++;
	return (counter);
}
