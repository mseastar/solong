/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coin_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:12:10 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 15:47:30 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

void	ft_coin_col_b(t_vars *vars)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < vars->fish->height)
	{
		j = -1;
		while (++j < vars->fish->width)
		{
			if (vars->map[vars->fish->y + i][vars->fish->x + j] == 'C')
			{
				vars->coin_collected--;
				vars->map[vars->fish->y + i][vars->fish->x + j] = '0';
			}
		}
	}
}
