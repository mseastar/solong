/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_player_patrol.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:12:11 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/06 14:22:12 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static int	ft_check_player(t_vars *vars, size_t x, size_t y)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < vars->fish->height)
	{
		j = -1;
		while (++j < vars->fish->width)
		{
			if (vars->fish->y + i == y && vars->fish->x + j == x)
				return (1);
		}
	}
	return (0);
}

int	ft_check_player_patrol_b(t_vars *vars)
{
	t_enemy	*step;
	size_t	i;
	size_t	j;

	step = vars->enemy;
	while (step)
	{
		i = -1;
		while (++i < step->width)
		{
			j = -1;
			while (++j < step->height)
			{
				if (ft_check_player(vars, step->x + j, step->y + i))
					return (1);
			}
		}
		step = step->next;
	}
	return (0);
}
