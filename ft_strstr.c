/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:56:38 by jwalsh            #+#    #+#             */
/*   Updated: 2016/11/04 13:01:43 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;
	int	to_find_length;

	i = 0;
	to_find_length = 0;
	while (to_find[to_find_length])
		to_find_length++;
	while (str[i++])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && str[i + j] == to_find[j] && to_find[j])
			{
				j++;
			}
			if (j == to_find_length)
				return ((char *)&str[i]);
		}
	}
	return (0);
}
