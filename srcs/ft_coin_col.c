/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coin_col.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:52:40 by mseastar          #+#    #+#             */
/*   Updated: 2021/11/28 13:52:40 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/so_long.h"

void	ft_coin_col(t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	while (i < vars->fish->height)
	{
		j = 0;
		while (j < vars->fish->width)
		{
			if (vars->map[vars->fish->y + i][vars->fish->x + j] == 'C')
			{
				vars->coin_collected--;
				vars->map[vars->fish->y + i][vars->fish->x + j] = '0';
			}
			j++;
		}
		i++;
	}
}
