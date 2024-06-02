/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:46:25 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 10:14:17 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

static void	bfl_ll_initialize(t_ll **linked_list)
{
	if (!(*linked_list))
		return ;
	(*linked_list)->content = NULL;
	(*linked_list)->next = NULL;
	return ;
}

t_ll	*bfl_ll_create_node(void)
{
	t_ll	*linked_list;

	linked_list = malloc(sizeof(t_ll));
	if (!linked_list)
		return (NULL);
	bfl_ll_initialize(&linked_list);
	return (linked_list);
}

void	bfl_ll_add_node(t_ll **linked_list)
{
	t_ll	*newnode;

	if (!(*linked_list))
		return ;
	newnode = bfl_ll_create_node();
	if (!newnode)
		return ;
	(*linked_list)->next = newnode;
}

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
