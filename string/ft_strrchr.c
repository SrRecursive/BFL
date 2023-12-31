/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:35:31 by ribana-b          #+#    #+#             */
/*   Updated: 2023/12/26 22:25:39 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

char	*ft_strrchr(const char *str, int character)
{
	size_t	strlength;

	if (!str)
		return (NULL);
	if (!(*str) && character == '\0')
		return ((char *)str);
	strlength = ft_strlen(str) + 1;
	while (strlength-- > 0)
		if ((unsigned char)str[strlength] == (unsigned char)character)
			return ((char *)str + strlength);
	return (NULL);
}
