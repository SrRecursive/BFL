/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:17:59 by ribana-b          #+#    #+#             */
/*   Updated: 2023/10/04 11:34:10 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

void	*ft_calloc(unsigned int bytes, unsigned int sizetype)
{
	void	*ptr;

	ptr = malloc(bytes * sizetype);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, bytes * sizetype);
	return (ptr);
}
