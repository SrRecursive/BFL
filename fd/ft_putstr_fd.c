/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:03:52 by ribana-b          #+#    #+#             */
/*   Updated: 2023/10/04 13:31:45 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

int	ft_putstr_fd(const char *str, int fd)
{
	int	byteswritten;
	int	counter;

	if (str == NULL || fd < 0)
		return (-1);
	counter = 0;
	while (str[counter] != '\0')
	{
		byteswritten = write(fd, &str[counter], 1);
		if (byteswritten < 0)
			return (-1);
		counter++;
	}
	return (byteswritten);
}