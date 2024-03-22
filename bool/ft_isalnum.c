/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 15:43:51 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/03/22 15:43:55 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "bfl.h"

int	ft_isalnum(int character)
{
	return (ft_isalpha(character) || ft_isdigit(character));
}
