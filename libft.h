/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:24:15 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/03 17:45:22 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
unsigned long	ft_strlen(char *s);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dst, char *src);
char			*ft_strcat(char *s1, char *s2);
char			*ft_strncat(char *s1, char *s2, int nb);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);
int				ft_isalpha(int c);


#endif
