/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:27:01 by ribana-b          #+#    #+#             */
/*   Updated: 2023/10/06 23:05:39 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

void	ft_memset(void *ptr, int character, unsigned int bytes)
{
	char	*newptr;

	newptr = (char *)ptr;
	while (bytes-- > 0)
		newptr[bytes] = character;
	return ;
}
