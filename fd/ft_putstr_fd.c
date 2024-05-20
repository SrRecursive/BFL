/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:03:52 by ribana-b          #+#    #+#             */
/*   Updated: 2024/05/13 22:45:14 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

int	ft_putstr_fd(const char *str, int fd)
{
	int	bytes_written;
	int	success;

	if (fd < 0)
		return (-1);
	if (!str)
	{
		success = write(fd, "(null)", 6);
		if (success < 0)
			return (-1);
		return (success);
	}
	success = write(fd, str, ft_strlen(str));
	if (success < 0)
		return (-1);
	bytes_written = success;
	return (bytes_written);
}
