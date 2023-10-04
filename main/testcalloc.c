/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:35:01 by ribana-b          #+#    #+#             */
/*   Updated: 2023/10/04 11:46:09 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		index;

	str = (char *)ft_calloc(5, sizeof(char));
	if (str == NULL)
		return (1);
	index = 0;
	while (index < 4)
	{
		str[index] = '-';
		index++;
	}
	free(str);
	return (0);
}