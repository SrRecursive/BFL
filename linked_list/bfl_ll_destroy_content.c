/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl_ll_destroy_content.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 12:14:57 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/06/02 12:52:50 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "BFL.h"

void	bfl_ll_destroy_content(t_ll **linked_list)
{
	if (!linked_list || !(*linked_list) || !((*linked_list)->content))
		return ;
	free((*linked_list)->content);
	(*linked_list)->content = NULL;
}
