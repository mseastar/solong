/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_player.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:08:12 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:08:12 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

int	ft_player_check_b(t_vars *vars, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < vars->fish->height)
	{
		j = 0;
		while (j < vars->fish->width)
		{
			if (vars->map[vars->fish->y + i][vars->fish->x + j] == c)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
