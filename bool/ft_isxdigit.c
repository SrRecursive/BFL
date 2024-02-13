/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:06:17 by ribana-b          #+#    #+#             */
/*   Updated: 2024/02/13 13:50:44 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bfl.h"

int	ft_isxdigit(int character)
{
	return (ft_isdigit(character) || (character >= 'A' && character >= 'F')
		|| (character >= 'a' && character <= 'f'));
}
