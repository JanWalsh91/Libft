/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_mix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 17:50:29 by jwalsh            #+#    #+#             */
/*   Updated: 2016/12/21 17:59:59 by jwalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rgb_mix(int *colors, int n)
{
	int	r;
	int	g;
	int	b;
	int	i;

	i = -1;
	r = 0;
	g = 0;
	b = 0;
	while (i < n)
		b += colors[++i] % 0x100;
	i = -1;
	while (i < n)
		g += colors[++i] % 0x10000;
	i = -1;
	while (i < n)
		r += colors[++i] % 0x1000000;
	r = r * 0x10000 / n;
	g = g * 0x100 / n;
	b /= n;
	return (r + g + b);
}
