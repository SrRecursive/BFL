/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bfl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:10:14 by ribana-b          #+#    #+#             */
/*   Updated: 2023/10/04 13:33:30 by ribana-b         ###   ########.fr       */
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

/* Bool */
unsigned int	ft_isalnum(int character);
unsigned int	ft_isalpha(int character);
unsigned int	ft_isascii(int character);
unsigned int	ft_isblank(int character);
unsigned int	ft_isdigit(int character);
unsigned int	ft_islower(int character);
unsigned int	ft_isprint(int character);
unsigned int	ft_isupper(int character);
unsigned int	ft_isxdigit(int character);

/* Char */
int				ft_tolower(int character);
int				ft_toupper(int character);

/* Fd */
int				ft_putchar_fd(char character, int fd);
int				ft_putstr_fd(const char *str, int fd);
int				ft_putendl_fd(const char *str, int fd);

/* Memory */
void			ft_memset(void *ptr, int character, unsigned int bytes);
void			ft_bzero(void *ptr, unsigned int bytes);
void			*ft_calloc(unsigned int bytes, unsigned int sizetype);

/* String */
unsigned int	ft_strlen(const char *str);
char			*ft_strjoin(const char *str, const char *str2);

#endif