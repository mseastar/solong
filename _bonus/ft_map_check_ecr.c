/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_ecr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseastar <mseastar@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:08:29 by mseastar          #+#    #+#             */
/*   Updated: 2021/12/04 00:08:29 by mseastar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long_bonus.h"

static void	ft_respawn(t_vars *vars, int i, int j, t_objs *objs)
{
	vars->fish->x = j;
	vars->fish->y = i;
	vars->fish->width = 2;
	vars->fish->height = 3;
	objs->respawn++;
}

void	ft_map_check_ecr_b(char **map, t_objs *objs, t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'E')
				objs->exit = 1;
			else if (map[i][j] == 'C')
			{
				vars->coin_collected++;
				objs->coin = 1;
			}
			else if (map[i][j] == 'P')
				ft_respawn(vars, i, j, objs);
			else if (map[i][j] != '7' && map[i][j] != '1' \
			&& map[i][j] != '0')
				objs->valid = 0;
			j++;
		}
		i++;
	}
}
