/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl_ll_add_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:17:29 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 12:17:46 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

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
