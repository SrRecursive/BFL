/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:07:28 by ribana-b          #+#    #+#             */
/*   Updated: 2024/01/16 17:38:40 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

void	free_single_ptr(void *ptr)
{
	char	**temp;

	temp = (char **)ptr;
	free(*temp);
	*temp = NULL;
}

static int	free_double_ptr(void *ptr, size_t *index_container)
{
	char	***temp;
	size_t	index;

	temp = (char ***)ptr;
	index = 0;
	while (index < *index_container)
	{
		if (!(*temp)[index])
			return (1);
		free_single_ptr(&(*temp)[index]);
		index++;
	}
	free(*temp);
	*temp = NULL;
	return (0);
}

static int	free_triple_ptr(void *ptr, size_t *index_container)
{
	char	****temp;
	size_t	index;
	int		flag;

	temp = (char ****)ptr;
	index = 0;
	flag = 0;
	while (index < *index_container)
	{
		if (flag || !(*temp)[index])
			return (1);
		flag = free_double_ptr(&(*temp)[index], index_container + 1);
		free((*temp)[index]);
		(*temp)[index] = NULL;
		index++;
	}
	free(*temp);
	*temp = NULL;
	return (0);
}

void	ft_free(void *ptr_reference, size_t index_limit, ...)
{
	va_list	args;
	size_t	index_container[2];
	size_t	index;

	if (index_limit < 1 || index_limit > 3)
		return ;
	va_start(args, index_limit);
	index = 0;
	while (index < index_limit - 1)
	{
		index_container[index] = va_arg(args, size_t);
		index++;
	}
	if (index_limit == 1)
	{
		free_single_ptr(ptr_reference);
	}
	else if (index_limit == 2)
		free_double_ptr(ptr_reference, index_container);
	else
		free_triple_ptr(ptr_reference, index_container);
	va_end(args);
}
