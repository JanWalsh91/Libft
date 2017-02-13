/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <jwalsh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 11:17:18 by jwalsh            #+#    #+#             */
/*   Updated: 2017/02/13 11:26:32 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
** Converts an array into a double. To be improved.
*/

double  ft_atod(const char *str)
{
    double  result;
    int     i;
    double     divider;

    result = 0;
    if (!str)
        return (result);
    result = ft_atoi(str);
    i = 0;
    while (ft_isdigit(str[i]))
        ++i;
    if (str[i] != ',')
        return (result);
    divider = 10;
    while (ft_isdigit(str[++i]))
    {
        result += (str[i] - '0') / divider;
        divider *= 10;
    }
    return (result);
}