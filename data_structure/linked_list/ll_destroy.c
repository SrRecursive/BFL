/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:27:42 by ribana-b          #+#    #+#             */
/*   Updated: 2023/11/18 09:59:52 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/bfl.h"

void	ll_destroy_content(t_ll **ll)
{
	if (!(*ll) || !((*ll)->content))
		return ;
	free((*ll)->content);
	(*ll)->content = NULL;
	return ;
}

void	ll_destroy(t_ll **ll)
{
	t_ll	*temp;

	if (!(*ll))
		return ;
	while (*ll)
	{
		temp = (*ll)->next;
		ll_destroy_content(ll);
		free(*ll);
		*ll = temp;
	}
	return ;
}
