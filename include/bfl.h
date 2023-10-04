/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:10:14 by ribana-b          #+#    #+#             */
/*   Updated: 2023/10/04 11:31:42 by ribana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BFL_H
# define BFL_H

/* <--Defines Section--> */

/* <--Libraries Section--> */
# include <unistd.h>
# include <stdlib.h>

/* <--Structs Section--> */

/* <--Functions Section--> */

	/* Memory */

	void	ft_memset(void *ptr, int character, unsigned int bytes);
	void	ft_bzero(void *ptr, unsigned int bytes);
	void	*ft_calloc(unsigned int bytes, unsigned int sizetype);
	
	/* String */
	
	unsigned int	ft_strlen(char *str);

	
	

#endif