/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl_ll_generate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:17:58 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 12:18:08 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

t_ll	*bfl_ll_generate(int length)
{
	t_ll	*linked_list;
	t_ll	*temp;

	if (length < 1)
		return (NULL);
	linked_list = bfl_ll_create_node();
	if (!linked_list)
		return (NULL);
	if (length == 1)
		return (linked_list);
	temp = linked_list;
	while (length-- > 1)
	{
		bfl_ll_add_node(&temp);
		if (!temp->next)
		{
			bfl_ll_destroy(&linked_list);
			return (NULL);
		}
		temp = temp->next;
	}
	return (linked_list);
}
