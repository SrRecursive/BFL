/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:25:35 by ribana-b          #+#    #+#             */
/*   Updated: 2023/12/12 17:27:23 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

static int	ft_puthex(unsigned long long n, int fd, int *bytes, int *success)
{
	char	*base;

	base = ft_strdup("0123456789abcdef");
	if (!base)
		return (-1);
	if (n > 0)
	{
		*bytes = ft_puthex(n / 16, fd, bytes, success);
		if (*bytes < 0)
		{
			free(base);
			return (-1);
		}
		*success = ft_putchar_fd(base[n % 16], fd);
		if (*success < 0)
		{
			free(base);
			return (-1);
		}
	}
	free(base);
	return (*bytes + *success);
}

int	ft_puthexl_fd(unsigned long long n, int fd)
{
	int		byteswritten;
	int		success;

	byteswritten = 0;
	success = 0;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	else
		return (ft_puthex(n, fd, &byteswritten, &success));
}
