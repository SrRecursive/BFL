/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:27:01 by ribana-b          #+#    #+#             */
/*   Updated: 2024/02/13 14:51:41 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

void	ft_memset(void *ptr, int character, size_t bytes)
{
	char	*temp;

	if (!ptr)
		return ;
	temp = (char *)ptr;
	while (bytes-- > 0)
		temp[bytes] = character;
	return ;
}
