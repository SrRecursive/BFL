/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl_ll_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:46:26 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 12:15:32 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

void	bfl_ll_destroy(t_ll **linked_list)
{
	t_ll	*temp;

	if (!(*linked_list))
		return ;
	while (*linked_list)
	{
		temp = (*linked_list)->next;
		bfl_ll_destroy_content(linked_list);
		free(*linked_list);
		*linked_list = temp;
	}
	return ;
}
